//SAUMYAK RAJ
//19CS30040

#include "Booking.h"
#include "Passenger.h"
#include "Railways.h"
#include "Station.h"
#include "Date.h"
#include "Gender.h"
#include "BookingClasses.h"
#include "BookingCategories.h"
#include "Concession.h"
#include "Exceptions.h"
#include <bits/stdc++.h>

using namespace std ; 

int Booking::sPNRSerial = 1 ; 
vector<Booking*> Booking::sBookings ; 
float Booking::sBaseFarePerKm = 0.5 ; 

Booking::Booking(const Station& fS, const Station& toS, string bDate, string rDate, const BookingClasses& bClass, const BookingCategories& bCateg , const Passenger& pass_):
fromStation_(fS), toStation_(toS),  bookingClass_(bClass), bookingCategory_(bCateg), passenger_(pass_), fare_(this->ComputeFare()), selfPNR_(sPNRSerial){
    bookingDate = Date::createDate(bDate) ;  reservationDate_ = Date::createDate(rDate) ; 
    bookingStatus_ = true ; 
    BookingMessage_ = "BOOKING COMPLETED" ; 
    sPNRSerial++ ; 
    sBookings.push_back(this) ; 
}

Booking::~Booking(){}

ostream& operator<<(ostream& os, const Booking& booking){
    os <<booking.BookingMessage_<<":" << endl;
    os <<"PNR Number = "<<booking.selfPNR_<<endl;
    os <<"From Station = "<< booking.fromStation_.GetName()<<endl;
    os <<"To Station = "<< booking.toStation_.GetName()<<endl;
    os <<"Travel Date = " << booking.reservationDate_<<endl;
    os << booking.bookingClass_ << endl ; 
    os <<"Fare = "<<booking.fare_<< endl ;
    os<< "Passenger is: " << endl << booking.passenger_ <<endl;
    return os;
}


int Booking::ComputeFare(){
    
    double amt = 0.0 ; 
    int distance = fromStation_.GetDistance(toStation_.GetName()) ; 
    amt += (sBaseFarePerKm * distance) ;
    amt *= bookingClass_.GetLoadFactor() ; 
    double concessionFact = bookingCategory_.GetConcessionFactor(passenger_.GetGender(), bookingClass_.GetName()) ; 

    // cout << concessionFact << endl; 
    amt *= (1 - concessionFact) ; 
    string cat_name = bookingCategory_.GetName() ; 

    if(cat_name == "Tatkal" || cat_name == "Premium_Tatkal"){
        double curr_amt = 0.0 ; 
        if(distance >= bookingClass_.GetMinTatkalDistance()){
            if(cat_name == "Tatkal"){
                curr_amt = amt * bookingClass_.GetTatkalLoadFactor() ; 
                double mn = bookingClass_.GetMinTatkalCharge() , mx = bookingClass_.GetMaxTatkalCharge() ;
                curr_amt = min(mn, max( mn, curr_amt)) ; 
            }
            else{
                curr_amt = 2 * amt * bookingClass_.GetTatkalLoadFactor() ; 
                double mn = 2 * bookingClass_.GetMinTatkalCharge() , mx = 2 * bookingClass_.GetMaxTatkalCharge() ;
                curr_amt = min(mn, max( mn, curr_amt)) ; 
            }   
        }
        amt += curr_amt ; 
    }
    amt += (bookingClass_.GetReservationCharge()) ; 
    return amt ;   
}

// void Booking::UnitTest(){
//     try{
//         Passenger p1 = Passenger::createPassenger("", "", "", "1234522344", "04/04/2002", Gender::Male::Type(), "6261171632", 1, 0, "") ; 
//         Booking b3(Station("Delhi"), Station("Mumbai"), "14/02/2019" , "20/03/2021" , BookingClasses::AC3Tier::Type(), Divyaang::Blind::Type(), p1) ;
//         cout << b3 << endl ; 
//     }
//     catch(const Bad_Passenger& p){
//         cout << p.what() << endl ; 
//     }
//     // Booking b1(Station("Kolkata"), Station("Chennai"), "14/02/2019" , "20/03/2021" , BookingClasses::ACFirstClass::Type(), BookingCategories::SeniorCitizen::Type(), p1) ;

//     // Booking b2(Station("Delhi"), Station("Mumbai"), "14/02/2019" , "20/03/2021" , BookingClasses::AC3Tier::Type(), BookingCategories::SeniorCitizen::Type(), p1) ; 
//     Passenger p2 = Passenger::createPassenger("Shashwat", "", "", "1234522344", "04/04/2002", Gender::Male::Type(), "6261171632", 1, 0, "") ; 
//     Booking b4(Station("Delhi"), Station("Mumbai"), "14/02/2019" , "20/03/2021" , BookingClasses::AC3Tier::Type(), Divyaang::Blind::Type(), p2) ;
//     cout << b4 << endl ; 
// }


void Booking::IsValidBooking(const Station &fS, const Station &toS, string bDate, string rDate, const BookingClasses &bClass, const BookingCategories &bCateg, const Passenger& pass_){

    Bad_Booking e ; 

    // cout << "a" << endl ; 

    if(fS.GetName() == toS.GetName()){
        throw e ; 
    }

    // cout << "b" << endl ; 

    Date d1 = Date::createDate(bDate) ; 
    Date d2 = Date::createDate(rDate) ;

    // cout << "c" << endl ; 

    if(d1.CompYear(d2) <= 0){
        throw e ; 
    }

    // cout << "d" << endl ; 

    if(bCateg.GetName() == "Ladies" && pass_.GetGender() == "Male"){ throw e ; }
    
    // cout << "e" << endl ; 

    if(bCateg.GetName() == "Senior Citizen"){
        long int age = d2.CompYear(pass_.GetDateOfBirth()) / 365 ; 
        if(pass_.GetGender() == "Male" && age < 60){
            throw e ; 
        }
        if(pass_.GetGender() == "Female" && age < 58){ throw e ; }
    }

    // cout << "f" << endl ; 

    if(bCateg.GetName() == "TB" || bCateg.GetName() == "Blind" || bCateg.GetName() == "Orthopedic" || bCateg.GetName() == "Cancer"){
        if(pass_.GetCategory() != "Divyaang" || (pass_.GetDisabilityType() != bCateg.GetName())){
            throw e ; 
        }
    }

    // cout << "g" << endl ; 

}

const Booking& Booking::DoBooking(const Station &fS, const Station &toS, string bDate, string rDate, const BookingClasses &bClass, const BookingCategories &bCateg, const Passenger& pass_){

    Booking::IsValidBooking(fS, toS, bDate, rDate, bClass, bCateg, pass_) ; 

    Booking *b = new Booking(fS, toS, bDate, rDate, bClass, bCateg, pass_) ;
    return *b ; 
}   


// int main(){

//     Booking::UnitTest() ; 
//     return 0 ; 
// }
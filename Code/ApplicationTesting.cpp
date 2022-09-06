//SAUMYAK RAJ
//19CS30040

#include "Station.h"
#include "Railways.h"
#include "Gender.h"
#include "Exceptions.h"
#include "Date.h"
#include "Booking.h"
#include "Concession.h"
#include "BookingClasses.h"
#include "BookingCategories.h"
#include "Passenger.h"

#include <bits/stdc++.h>

using namespace std ; 

void ApplicationTest(){

    // Initisialising all the passengers 

    Passenger p1 = Passenger::createPassenger("Saumyak", "", "Raj", "842233101212", "04/04/2002", Gender::Male::Type(), "6261171632", 1, 0, "") ; 
    Passenger p2 = Passenger::createPassenger("Suman", "", "Shukla", "842233104545", "29/03/1975", Gender::Female::Type(), "6261171656", 1, 0, "") ; 
    Passenger p3 = Passenger::createPassenger("Ram", "Chandra", "Raj", "747933101212", "15/05/1935", Gender::Male::Type(), "6261171632", 3, 0, "") ; 
    Passenger p4 = Passenger::createPassenger("Tony", "", "", "842233101212", "04/05/1999", Gender::Male::Type(), "6261171632", 4, 0, "Blind") ; 
    Passenger p5 = Passenger::createPassenger("Steve", "", "Hand", "842233101212", "04/05/1945", Gender::Male::Type(), "6261171632", 4, 0, "Cancer") ;
    
    Booking b1 = Booking::DoBooking(Station("Delhi"), Station("Mumbai"), "24/02/2021", "05/07/2021", BookingClasses::ACFirstClass::Type(), BookingCategories::General::Type(), p1) ; 
    Booking b2 = Booking::DoBooking(Station("Delhi"), Station("Bangalore"), "14/05/2020", "16/05/2020", BookingClasses::AC2Tier::Type(), BookingCategories::PremiumTatkal::Type(), p1) ; 

    Booking b3 = Booking::DoBooking(Station("Delhi"), Station("Mumbai"), "24/03/2021", "09/07/2021", BookingClasses::SecondSitting::Type(), BookingCategories::Ladies::Type(), p2) ; 
    Booking b4 = Booking::DoBooking(Station("Delhi"), Station("Bangalore"), "14/06/2020", "15/06/2020", BookingClasses::ACChairCar::Type(), BookingCategories::Tatkal::Type(), p2) ;

    Booking b5 = Booking::DoBooking(Station("Kolkata"), Station("Mumbai"), "04/04/2021", "15/07/2021", BookingClasses::AC3Tier::Type(), BookingCategories::General::Type(), p3) ; 

    Booking b7 = Booking::DoBooking(Station("Chennai"), Station("Delhi"), "10/04/2021", "15/07/2021", BookingClasses::AC2Tier::Type(), BookingCategories::General::Type(), p4) ; 
    Booking b8 = Booking::DoBooking(Station("Chennai"), Station("Mumbai"), "02/07/2020", "05/08/2020", BookingClasses::FirstClass::Type(), Divyaang::Blind::Type(), p4) ;

    Booking b9 = Booking::DoBooking(Station("Mumbai"), Station("Kolkata"), "05/05/2021", "15/08/2021", BookingClasses::ACFirstClass::Type(), BookingCategories::General::Type(), p5) ; 
    Booking b10 = Booking::DoBooking(Station("Mumbai"), Station("Bangalore"), "25/06/2020", "25/07/2020", BookingClasses::SecondSitting::Type(), Divyaang::Cancer::Type(), p5) ;

    vector<Booking*>::iterator it;
    for (it = Booking::sBookings.begin(); it < Booking::sBookings.end(); ++it) {
        cout << *(*it)<<endl;
    }

}

int main(){

    ApplicationTest() ; 
    return 0 ; 
}
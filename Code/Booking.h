//SAUMYAK RAJ
//19CS30040

#ifndef RailwaySystemBooking_HPP
#define RailwaySystemBooking_HPP

#include <bits/stdc++.h>
#include "Station.h"
#include "Date.h"
#include "Railways.h"
#include "BookingClasses.h"
#include "BookingCategories.h"
#include "Concession.h"
#include "Exceptions.h"
#include "Passenger.h"

using namespace std ; 

template <typename T>
class BookingTypes ; 

class Booking{

    static int sPNRSerial ; 
    static float sBaseFarePerKm ; 

    const Station fromStation_ , toStation_ ; 
    Date bookingDate = Date::createDate("01/01/2000"), reservationDate_  = Date::createDate("02/01/2000"); 
    const BookingClasses& bookingClass_ ; 
    const Passenger passenger_ ;
    
    const BookingCategories& bookingCategory_ ; 

    const int selfPNR_ ; 
    const int fare_ ;  
    string BookingMessage_ ; 
    bool bookingStatus_ ; 

    Booking(const Station& fS, const Station& toS, string bDate, string rDate, const BookingClasses& bClass, const BookingCategories& bCateg , const Passenger& pass_) ; 

public:

    ~Booking() ; 

    static vector<Booking*> sBookings ; 

    static const Booking& DoBooking(const Station& fS, const Station& toS, string bDate, string rDate, const BookingClasses& bClass, const BookingCategories& bCateg , const Passenger& pass_ ) ; 

    int ComputeFare() ; 

    int GetFare() const { return fare_ ; } ; 
    Station GetFromStation() const { return fromStation_ ;  } 
    Station GetToStation() const { return toStation_; }
    Date GetBookingDate() const  {return bookingDate ; }
    Date GetReservationDate() const  {return reservationDate_ ; }
    int GetSelfPNR() const { return selfPNR_ ; }
    bool GetBookingStatus() const { return bookingStatus_ ;}
    string GetBookingMessage() const { return BookingMessage_ ;}
    string GetBookingClassName() const { return bookingClass_.GetName() ; }
    string GetBookingCategoryName() const {return bookingCategory_.GetName() ; }

    const BookingClasses& GetBookingClass() const { return bookingClass_; } 
    const BookingCategories& GetBookingCategories() const {return bookingCategory_ ; }
    const Passenger GetFullPassenger(){ return passenger_; }

    static void IsValidBooking(const Station &fS, const Station &toS, string bDate, string rDate, const BookingClasses &bClass, const BookingCategories &bCateg, const Passenger& pass_) ; 

    Booking operator=(const Booking& b) ; 

    friend ostream& operator<<(ostream&os, const Booking& booking) ;  

    static void UnitTest() ; 

} ; 


#endif
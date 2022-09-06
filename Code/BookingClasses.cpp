//SAUMYAK RAJ
//19CS30040

#ifndef _BOOKING_CPP
#define _BOOKING_CPP

#include "BookingClasses.h"

// Names defined as static constants
template <>
const string BookingClasses::ACFirstClass::sName = "AC First Class";
template <>
const double BookingClasses::ACFirstClass::sloadFactor = 6.50;
template <>
const bool BookingClasses::ACFirstClass::AC = true;
template <>
const bool BookingClasses::ACFirstClass::Luxury = true;
template <>
const int BookingClasses::ACFirstClass::min_TatkalCharge = 400;
template <>
const int BookingClasses::ACFirstClass::max_TatkalCharge = 500;
template <>
const int BookingClasses::ACFirstClass::min_TatkalDist = 500;
template <>
const double BookingClasses::ACFirstClass::TatkalLoadFactor = 0.3;
template <>
const double BookingClasses::ACFirstClass::reservationCharge = 60.00;
template<>
const bool BookingClasses::ACFirstClass::sitting = false ;
template<>
const int BookingClasses::ACFirstClass::tiers = 2 ;  

template <>
const string BookingClasses::AC2Tier::sName = "AC 2 Tier";
template <>
const double BookingClasses::AC2Tier::sloadFactor = 4.00;
template <>
const bool BookingClasses::AC2Tier::AC = true;
template <>
const bool BookingClasses::AC2Tier::Luxury = false;
template <>
const int BookingClasses::AC2Tier::min_TatkalCharge = 400;
template <>
const int BookingClasses::AC2Tier::max_TatkalCharge = 500;
template <>
const int BookingClasses::AC2Tier::min_TatkalDist = 500;
template <>
const double BookingClasses::AC2Tier::TatkalLoadFactor = 0.3;
template <>
const double BookingClasses::AC2Tier::reservationCharge = 50.00;
template<>
const bool BookingClasses::AC2Tier::sitting = false ;
template<>
const int BookingClasses::AC2Tier::tiers = 2 ;  

template <>
const string BookingClasses::AC3Tier::sName = "AC 3 Tier";
template <>
const double BookingClasses::AC3Tier::sloadFactor = 2.50;
template <>
const bool BookingClasses::AC3Tier::AC = true;
template <>
const bool BookingClasses::AC3Tier::Luxury = false;
template <>
const int BookingClasses::AC3Tier::min_TatkalCharge = 300;
template <>
const int BookingClasses::AC3Tier::max_TatkalCharge = 400;
template <>
const int BookingClasses::AC3Tier::min_TatkalDist = 500;
template <>
const double BookingClasses::AC3Tier::TatkalLoadFactor = 0.3;
template<>
const double BookingClasses::AC3Tier::reservationCharge = 40.00;
template<>
const bool BookingClasses::AC3Tier::sitting = false ;
template<>
const int BookingClasses::AC3Tier::tiers = 3 ; 

template <>
const string BookingClasses::FirstClass::sName = "First Class";
template <>
const double BookingClasses::FirstClass::sloadFactor = 3.00;
template <>
const bool BookingClasses::FirstClass::AC = false;
template <>
const bool BookingClasses::FirstClass::Luxury = true;
template <>
const int BookingClasses::FirstClass::min_TatkalCharge = 400;
template <>
const int BookingClasses::FirstClass::max_TatkalCharge = 500;
template <>
const int BookingClasses::FirstClass::min_TatkalDist = 500;
template <>
const double BookingClasses::FirstClass::TatkalLoadFactor = 0.3;
template<>
const double BookingClasses::FirstClass::reservationCharge = 50.00;
template<>
const bool BookingClasses::FirstClass::sitting = false ;
template<>
const int BookingClasses::FirstClass::tiers = 2 ;

template <>
const string BookingClasses::ACChairCar::sName = "AC Chair Car";
template <>
const double BookingClasses::ACChairCar::sloadFactor = 2.00;
template <>
const bool BookingClasses::ACChairCar::AC = true;
template <>
const bool BookingClasses::ACChairCar::Luxury = false;
template <>
const int BookingClasses::ACChairCar::min_TatkalCharge = 125;
template <>
const int BookingClasses::ACChairCar::max_TatkalCharge = 225;
template <>
const int BookingClasses::ACChairCar::min_TatkalDist = 250;
template <>
const double BookingClasses::ACChairCar::TatkalLoadFactor = 0.3;
template<>
const double BookingClasses::ACChairCar::reservationCharge = 40.00;
template<>
const bool BookingClasses::ACChairCar::sitting = true ;
template<>
const int BookingClasses::ACChairCar::tiers = 0 ;

template <>
const string BookingClasses::ExecutiveChairCar::sName = "Executive Chair Car";
template <>
const double BookingClasses::ExecutiveChairCar::sloadFactor = 5.00;
template <>
const bool BookingClasses::ExecutiveChairCar::AC = true;
template <>
const bool BookingClasses::ExecutiveChairCar::Luxury = true;
template <>
const int BookingClasses::ExecutiveChairCar::min_TatkalCharge = 400;
template <>
const int BookingClasses::ExecutiveChairCar::max_TatkalCharge = 500;
template <>
const int BookingClasses::ExecutiveChairCar::min_TatkalDist = 250;
template <>
const double BookingClasses::ExecutiveChairCar::TatkalLoadFactor = 0.3;
template<>
const double BookingClasses::ExecutiveChairCar::reservationCharge = 60.00;
template<>
const bool BookingClasses::ExecutiveChairCar::sitting = true ;
template<>
const int BookingClasses::ExecutiveChairCar::tiers = 0 ;

template <>
const string BookingClasses::Sleeper::sName = "Sleeper";
template <>
const double BookingClasses::Sleeper::sloadFactor = 1.00;
template <>
const bool BookingClasses::Sleeper::AC = false;
template <>
const bool BookingClasses::Sleeper::Luxury = false;
template <>
const int BookingClasses::Sleeper::min_TatkalCharge = 100;
template <>
const int BookingClasses::Sleeper::max_TatkalCharge = 200;
template <>
const int BookingClasses::Sleeper::min_TatkalDist = 500;
template <>
const double BookingClasses::Sleeper::TatkalLoadFactor = 0.3;
template<>
const double BookingClasses::Sleeper::reservationCharge = 20.00;
template<>
const bool BookingClasses::Sleeper::sitting = false ;
template<>
const int BookingClasses::Sleeper::tiers = 3 ;

template <>
const string BookingClasses::SecondSitting::sName = "Second Sitting";
template <>
const double BookingClasses::SecondSitting::sloadFactor = 0.60;
template <>
const bool BookingClasses::SecondSitting::AC = false;
template <>
const bool BookingClasses::SecondSitting::Luxury = false;
template <>
const int BookingClasses::SecondSitting::min_TatkalCharge = 10;
template <>
const int BookingClasses::SecondSitting::max_TatkalCharge = 15;
template <>
const int BookingClasses::SecondSitting::min_TatkalDist = 100;
template <>
const double BookingClasses::SecondSitting::TatkalLoadFactor = 0.1;
template<>
const double BookingClasses::SecondSitting::reservationCharge = 15.00;
template<>
const bool BookingClasses::SecondSitting::sitting = true ;
template<>
const int BookingClasses::SecondSitting::tiers = 0 ;

ostream& operator<<(ostream& out, const BookingClasses& bClass){
	out << "Travel Class = " << bClass.GetName() << endl ; 
	out << " : Mode: " ; 			
	if(bClass.IsSitting())	out << "Seat" << endl ;
	else		out << "Berth" << endl ;  
	out << " : Comfort: " ;
	if(bClass.IsAC())	out << "AC" << endl ; 
	else		out << "Non AC" << endl ; 
	out << " : Bunks: " << bClass.GetNumberOfTiers() << endl ;
	out << " : Luxury: " ;
	if(bClass.IsLuxury())	out << "Yes" ;
	else 		out << "No" ;
	return out ;   
}

#endif
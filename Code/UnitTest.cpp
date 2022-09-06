//SAUMYAK RAJ
//19CS30040

#include <bits/stdc++.h>
#include "BookingClasses.h"
#include "Booking.h"
#include "Exceptions.h"
#include "Railways.h"
#include "Date.h"
#include "Station.h"
#include "Passenger.h"


using namespace std ;

static int testNumber = 0 ; 
static int successfultest = 0 ; 

void BookingClassUnitTest() {

	const BookingClasses& ACFirstClass_ = BookingClasses::ACFirstClass::Type() ;
	assert(ACFirstClass_.GetName() == "AC First Class") ;
	assert(ACFirstClass_.GetLoadFactor() == 6.50) ;
	assert(ACFirstClass_.IsAC() == true) ;
	assert(ACFirstClass_.IsLuxury() == true) ;
	assert(ACFirstClass_.IsSitting() == false) ;
	assert(ACFirstClass_.GetNumberOfTiers() == 2) ;
	assert(ACFirstClass_.GetMinTatkalCharge() == 400) ;
	assert(ACFirstClass_.GetMaxTatkalCharge() == 500) ;
	assert(ACFirstClass_.GetReservationCharge() == 60.00) ;
	assert(ACFirstClass_.GetMinTatkalDistance() == 500) ;
	assert(ACFirstClass_.GetTatkalLoadFactor() == 0.3)  ;



	const BookingClasses& AC2Tier_ = BookingClasses::AC2Tier::Type() ;
	assert(AC2Tier_.GetName() == "AC 2 Tier") ;
	assert(AC2Tier_.GetLoadFactor() == 4.00) ;
	assert(AC2Tier_.IsAC() == true) ;
	assert(AC2Tier_.IsLuxury() == false) ;
	assert(AC2Tier_.IsSitting() == false) ;
	assert(AC2Tier_.GetNumberOfTiers() == 2) ;
	assert(AC2Tier_.GetMinTatkalCharge() == 400) ;
	assert(AC2Tier_.GetMaxTatkalCharge() == 500) ;
	assert(AC2Tier_.GetReservationCharge() == 50.00) ;
	assert(AC2Tier_.GetMinTatkalDistance() == 500) ;
	assert(AC2Tier_.GetTatkalLoadFactor() == 0.3)  ;



	const BookingClasses& AC3Tier_ = BookingClasses::AC3Tier::Type() ;
	assert(AC3Tier_.GetName() == "AC 3 Tier") ;
	assert(AC3Tier_.GetLoadFactor() == 2.50) ;
	assert(AC3Tier_.IsAC() == true) ;
	assert(AC3Tier_.IsLuxury() == false) ;
	assert(AC3Tier_.IsSitting() == false) ;
	assert(AC3Tier_.GetNumberOfTiers() == 3) ;
	assert(AC3Tier_.GetMinTatkalCharge() == 300) ;
	assert(AC3Tier_.GetMaxTatkalCharge() == 400) ;
	assert(AC3Tier_.GetReservationCharge() == 40.00) ;
	assert(AC3Tier_.GetMinTatkalDistance() == 500) ;
	assert(AC3Tier_.GetTatkalLoadFactor() == 0.3)  ;



	const BookingClasses& FirstClass_ = BookingClasses::FirstClass::Type() ;
	assert(FirstClass_.GetName() == "First Class") ;
	assert(FirstClass_.GetLoadFactor() == 3.00) ;
	assert(FirstClass_.IsAC() == false) ;
	assert(FirstClass_.IsLuxury() == true) ;
	assert(FirstClass_.IsSitting() == false) ;
	assert(FirstClass_.GetNumberOfTiers() == 2) ;
	assert(FirstClass_.GetMinTatkalCharge() == 400) ;
	assert(FirstClass_.GetMaxTatkalCharge() == 500) ;
	assert(FirstClass_.GetReservationCharge() == 50.00) ;
	assert(FirstClass_.GetMinTatkalDistance() == 500) ;
	assert(FirstClass_.GetTatkalLoadFactor() == 0.3)  ;



	const BookingClasses& ACChairCar_ = BookingClasses::ACChairCar::Type() ;
	assert(ACChairCar_.GetName() == "AC Chair Car") ;
	assert(ACChairCar_.GetLoadFactor() == 2.00) ;
	assert(ACChairCar_.IsAC() == true) ;
	assert(ACChairCar_.IsLuxury() == false) ;
	assert(ACChairCar_.IsSitting() == true) ;
	assert(ACChairCar_.GetNumberOfTiers() == 0) ;
	assert(ACChairCar_.GetMinTatkalCharge() == 125) ;
	assert(ACChairCar_.GetMaxTatkalCharge() == 225) ;
	assert(ACChairCar_.GetReservationCharge() == 40.00) ;
	assert(ACChairCar_.GetMinTatkalDistance() == 250) ;
	assert(ACChairCar_.GetTatkalLoadFactor() == 0.3)  ;


	const BookingClasses& ExecutiveChairCar_ = BookingClasses::ExecutiveChairCar::Type() ;
	assert(ExecutiveChairCar_.GetName() == "Executive Chair Car") ;
	assert(ExecutiveChairCar_.GetLoadFactor() == 5.00) ;
	assert(ExecutiveChairCar_.IsAC() == true) ;
	assert(ExecutiveChairCar_.IsLuxury() == true) ;
	assert(ExecutiveChairCar_.IsSitting() == true) ;
	assert(ExecutiveChairCar_.GetNumberOfTiers() == 0) ;
	assert(ExecutiveChairCar_.GetMinTatkalCharge() == 400) ;
	assert(ExecutiveChairCar_.GetMaxTatkalCharge() == 500) ;
	assert(ExecutiveChairCar_.GetReservationCharge() == 60.00) ;
	assert(ExecutiveChairCar_.GetMinTatkalDistance() == 250) ;
	assert(ExecutiveChairCar_.GetTatkalLoadFactor() == 0.3)  ;


	const BookingClasses& Sleeper_ = BookingClasses::Sleeper::Type() ;
	assert(Sleeper_.GetName() == "Sleeper") ;
	assert(Sleeper_.GetLoadFactor() == 1.00) ;
	assert(Sleeper_.IsAC() == false) ;
	assert(Sleeper_.IsLuxury() == false) ;
	assert(Sleeper_.IsSitting() == false) ;
	assert(Sleeper_.GetNumberOfTiers() == 3) ;
	assert(Sleeper_.GetMinTatkalCharge() == 100) ;
	assert(Sleeper_.GetMaxTatkalCharge() == 200) ;
	assert(Sleeper_.GetReservationCharge() == 20.00) ;
	assert(Sleeper_.GetMinTatkalDistance() == 500) ;
	assert(Sleeper_.GetTatkalLoadFactor() == 0.3)  ;


	const BookingClasses& SecondSitting_ = BookingClasses::SecondSitting::Type() ;
	assert(SecondSitting_.GetName() == "Second Sitting") ;
	assert(SecondSitting_.GetLoadFactor() == 0.60) ;
	assert(SecondSitting_.IsAC() == false) ;
	assert(SecondSitting_.IsLuxury() == false) ;
	assert(SecondSitting_.IsSitting() == true) ;
	assert(SecondSitting_.GetNumberOfTiers() == 0) ;
	assert(SecondSitting_.GetMinTatkalCharge() == 10) ;
	assert(SecondSitting_.GetMaxTatkalCharge() == 15) ;
	assert(SecondSitting_.GetReservationCharge() == 15.00) ;
	assert(SecondSitting_.GetMinTatkalDistance() == 100) ;
	assert(SecondSitting_.GetTatkalLoadFactor() == 0.1)  ;

	cout << "Success in Testing BookingClass" << endl ; 

}

// enum Category { General = 1, Ladies , Senior_Citizen, Divyaang } ;

void PassengerUnitTest() {
	
	Passenger p1 = Passenger::createPassenger("Narendra", "", "Modi", "1234522344", "04/04/2002", Gender::Male::Type(), "6261171632", 1, 1, "") ;
	Date d1 = p1.GetDateOfBirth() ; 
	Date d2 = Date::createDate("04/04/2002") ; 

	assert(p1.GetName() == "Narendra  Modi");
	assert(p1.GetAadharNo() == "1234522344" );
	assert(d1 == d2);
	assert(p1.GetGender() == "Male");
	assert(p1.GetMobileNumber() == "6261171632");
	assert(p1.GetCategory() == "General" );

	const Passenger p2 = Passenger::createPassenger("Sonia", "", "Sheik", "1234522344", "04/04/2002", Gender::Female::Type(), "6261171632", 2, 2, "") ;
	d1 = p2.GetDateOfBirth() ; 
	d2 = Date::createDate("04/04/2002") ; 
	assert(p2.GetName() == "Sonia  Sheik");
	assert(p2.GetAadharNo() == "1234522344" );
	assert(d1 == d2);
	assert(p2.GetGender() == "Female");
	assert(p2.GetMobileNumber() == "6261171632");
	assert(p2.GetCategory() == "Ladies");

	const Passenger p3 = Passenger::createPassenger("Kevin", "", "Englund", "1234522344", "04/04/2002", Gender::Male::Type(), "6261171632", 3, 3, "") ;
	d1 = p2.GetDateOfBirth() ; 
	d2 = Date::createDate("04/04/2002") ; 
	assert(p3.GetName() == "Kevin  Englund");
	assert(p3.GetAadharNo() == "1234522344" );
	assert(d1 == d2);
	assert(p3.GetGender() == "Male");
	assert(p3.GetMobileNumber() == "6261171632");
	assert(p3.GetCategory() == "Senior Citizen");

	const Passenger p4 = Passenger::createPassenger("Rahul", "", "Sharma", "1234522344", "04/04/2002", Gender::Male::Type(), "6261171632", 4, 4, "Blind") ;
	d1 = p2.GetDateOfBirth() ; 
	d2 = Date::createDate("04/04/2002") ; 
	assert(p4.GetName() == "Rahul  Sharma");
	assert(p4.GetAadharNo() == "1234522344" );
	assert(d1 == d2);
	assert(p4.GetGender() == "Male");
	assert(p4.GetMobileNumber() == "6261171632");
	assert(p4.GetCategory() == "Divyaang");


	const Passenger p5 = Passenger::createPassenger("Narendra", "", "Modi", "1234522344", "04/04/2002", Gender::Male::Type(), "6261171632", 1, 1, "") ;	
	d1 = p2.GetDateOfBirth() ; 
	d2 = Date::createDate("04/04/2002") ; 
	assert(p5.GetName() == "Narendra  Modi");
	assert(p5.GetAadharNo() == "1234522344" );
	assert(d1 == d2);
	assert(p5.GetGender() == "Male");
	assert(p5.GetMobileNumber() == "6261171632");
	assert(p5.GetCategory() == "General" );

	const Passenger p6 = Passenger::createPassenger("Sonia", "", "Sheik", "1234522344", "04/04/2002", Gender::Female::Type(), "6261171632", 1, 2, "") ;
	d1 = p2.GetDateOfBirth() ; 
	d2 = Date::createDate("04/04/2002") ; 
	assert(p6.GetName() == "Sonia  Sheik");
	assert(p6.GetAadharNo() == "1234522344" );
	assert(d1 == d2);
	assert(p6.GetGender() == "Female");
	assert(p6.GetMobileNumber() == "6261171632");
	assert(p6.GetCategory() == "General");

	const Passenger p7 = Passenger::createPassenger("Ola", "", "Englund", "1234522344", "04/04/2002", Gender::Male::Type(), "6261171632", 1, 3, "") ;
	d1 = p2.GetDateOfBirth() ; 
	d2 = Date::createDate("04/04/2002") ; 
	assert(p7.GetName() == "Ola  Englund");
	assert(p7.GetAadharNo() == "1234522344" );
	assert(d1 == d2);
	assert(p7.GetGender() == "Male");
	assert(p7.GetMobileNumber() == "6261171632");
	assert(p7.GetCategory() == "General");
	
	cout << "Success in Testing Passenger Class" << endl ; 

}

void DateUnitTest() {
	
	Date date = Date::createDate("11/02/2001");
	
	assert(date.GiveDate() == 11);
	assert(date.GiveMonth() == "Feb");
	assert(date.GiveMonthNo() == 2);
	assert(date.GiveYear() == 2001);

	Date date1 = Date::createDate("26/04/2018");
	
	assert(date1.GiveDate() == 26);
	assert(date1.GiveMonth() == "Apr");
	assert(date1.GiveMonthNo() == 4);
	assert(date1.GiveYear() == 2018);


	Date date2 = Date::createDate("29/02/2020");
	
	assert(date2.GiveDate() == 29);
	assert(date2.GiveMonth() == "Feb");
	assert(date2.GiveMonthNo() == 2);
	assert(date2.GiveYear() == 2020);


	Date date3 = Date::createDate("31/12/2018");
	
	assert(date3.GiveDate() == 31);
	assert(date3.GiveMonth() == "Dec");
	assert(date3.GiveMonthNo() == 12);
	assert(date3.GiveYear() == 2018);

	cout << "Success in Testing DateClass" << endl ; 
}

// createPassenger(const string stname, const string mdname, const string flname, const string aadhaar, string dob, const Gender& g, const string mobNo, unsigned int cat, int disaID = 0, string disabType = "")

void BookingUnitTest() {
	
	
	try{
		Date d1 = Date::createDate("10/04/2021") , d2 = Date::createDate("24/07/2021") ; 
		Passenger p = Passenger::createPassenger("Shashwat", "", "Shukla", "432768911196", "04/04/2002" , Gender::Male::Type(), "6261171632", 4, 12, "Blind");
		Booking b1 = Booking::DoBooking(Station("Kolkata"), Station("Delhi"), "10/04/2021" , "24/07/2021", BookingClasses::AC2Tier::Type(), BookingCategories::General::Type(), p);
		assert(b1.GetFare() == 2994) ; 
		// write the test number 
	}
	catch (Bad_Booking& ex){
		cout << ex.what() << '\n';
	}


	try{
		Date d1 = Date::createDate("10/04/2021") , d2 = Date::createDate("24/07/2021") ; 
		Passenger p = Passenger::createPassenger("Shashwat", "", "Shukla", "432768911196", "04/04/1945" , Gender::Male::Type(), "6261171632", 4, 12, "Blind");
		Booking b1 = Booking::DoBooking(Station("Kolkata"), Station("Delhi"), "10/04/2021" , "24/07/2021", BookingClasses::AC2Tier::Type(), BookingCategories::SeniorCitizen::Type(), p); 
	}
	catch (Bad_Booking& ex){
		cout << ex.what() << '\n';
		// write test number 
	}


	try{
		Date d1 = Date::createDate("10/04/2021") , d2 = Date::createDate("24/07/2021") ; 
		Passenger p = Passenger::createPassenger("Shashwat", "", "Shukla", "432768911196", "04/04/1956" , Gender::Male::Type(), "6261171632", 4, 12, "Blind");
		Booking b1 = Booking::DoBooking(Station("Mumbai"), Station("Delhi"), "10/04/2021" , "24/07/2021", BookingClasses::AC2Tier::Type(), Divyaang::Blind::Type(), p); 
		// write test number 
	}
	catch (Bad_Booking& ex){
		cout << ex.what() << '\n';
	}

	try{
		Date d1 = Date::createDate("10/04/2021") , d2 = Date::createDate("24/07/2021") ; 
		Passenger p = Passenger::createPassenger("Shashwat", "", "Shukla", "432768911196", "04/04/1956" , Gender::Male::Type(), "6261171632", 4, 12, "Blind");
		Booking b1 = Booking::DoBooking(Station("Mumbai"), Station("Delhi"), "10/04/2021" , "24/07/2021", BookingClasses::AC2Tier::Type(), Divyaang::Cancer::Type(), p); 
	}
	catch (Bad_Booking& ex){
		cout << ex.what() << '\n';
		// write test number 
	}

	cout << "Success in Testing Booking" << endl ; 
}


// void RailwaysUnitTest(){

// 	try{
// 		Station s1 = Station("Mumbai") ; 
// 	}
// 	catch(Bad_Railways& e){
// 		cout << e.what() << endl ; 
// 	}

// 	try{
// 		Station s2 = Station("Goa") ; 
// 	}
// 	catch(Bad_Railways& e){
// 		cout << e.what() << endl ; 
// 	}

// }

int main() {

	// BookingClassUnitTest() ;
	// DateUnitTest();
	// StationUnitTest() ;
	BookingUnitTest() ;
	// PassengerUnitTest() ;
	return 0 ;

}
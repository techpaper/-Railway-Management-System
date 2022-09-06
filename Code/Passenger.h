//SAUMYAK RAJ
//19CS30040

#ifndef RailwaySystemPassenger_HPP
#define RailwaySystemPassenger_HPP

#include <bits/stdc++.h>
#include "Date.h"
#include "Gender.h"
#include "Exceptions.h"

using namespace std ;

class Passenger {

    enum Category { General = 1, Ladies , Senior_Citizen, Divyaang } ;

    const string name_ ;
    const string Aadhaar_id_ ;
    Date dateOfBirth = Date::createDate("01/01/1900");
    const Gender& gender_ ;
    const string mobileNo_ ;
    const Category category_ ;
    int disabilityID ;
    string disability ;

    Passenger(const string name, const string aadhaar, string dob, const Gender& g, const string mobNo, unsigned int cat, int disaID = 0, string disabType = "") ;

public:

    string GetName() const;
    string GetAadharNo() const ;
    Date GetDateOfBirth() const ;
    string GetGender() const ;
    string GetMobileNumber() const ;
    string GetCategory() const ;
    string GetDisabilityType() const  ; 
    ~Passenger() ;

    static const Passenger& createPassenger(const string stname, const string mdname, const string flname, const string aadhaar, string dob, const Gender& g, const string mobNo, unsigned int cat, int disaID = 0, string disabType = "") ;

    friend ostream& operator<< (ostream& out, const Passenger& d) ;

} ;

void IsValidPassenger(const string stname, const string mdname, const string flname, const string aadhaar, string dob, const Gender& g, const string mobNo, unsigned int cat, int disaID = 0, string disabType = "") ;



#endif
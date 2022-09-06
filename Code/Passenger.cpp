//SAUMYAK RAJ
//19CS30040

#include <bits/stdc++.h>
#include "Date.h"
#include "Passenger.h"
#include "Gender.h"
#include "Exceptions.h"

using namespace std ;

// vector <string> genderName = {"Male", "Female"} ;
vector <string> categoryName = {"General", "Ladies", "Senior Citizen", "Divyaang"} ; //, "Tatkal", "Premium Tatkal"} ;

Passenger::Passenger(const string name, const string aadhaar, string d, const Gender& g, const string mobNo, unsigned int cat, int disaID, string disabType) : name_(name), Aadhaar_id_(aadhaar), gender_(g), mobileNo_(mobNo), category_((Category)cat) {
    disabilityID = disaID ;
    disability = disabType ;
    dateOfBirth = Date::createDate(d) ;
}

Passenger::~Passenger() {} ;

string Passenger::GetName() const { return name_ ; }
string Passenger::GetAadharNo() const { return Aadhaar_id_ ; }
Date Passenger::GetDateOfBirth() const { return dateOfBirth ; }
string Passenger::GetGender() const { return gender_.GetName() ; }

string Passenger::GetMobileNumber() const { return mobileNo_ ; }
string Passenger::GetCategory() const { return categoryName[category_ - 1]  ;}

string Passenger::GetDisabilityType() const{
    if(GetCategory() == "Divyaang"){
        return disability ; 
    }
    else return "" ; 
}

void IsValidPassenger(const string stname, const string mdname, const string flname, const string aadhaar, string dob, const Gender &g, const string mobNo, unsigned int cat, int disaID, string disabType ) {

    // cout << "a" << endl ;
    if (stname.empty() && flname.empty()) {
        Bad_Passenger e ;
        throw e ;
    }
    // cout << "b" << endl ;
    Date datebirth = Date::createDate(dob) ; 
    if (datebirth.CompYear( Date::createDate("01/01/1900")) >= 0) {
        Bad_Passenger e ;
        throw e ;
    }
    // cout << "c" << endl ;
    // if (!disabType.empty() or disaID < 0) {
    //     Bad_Passenger e ;
    //     throw e ;
    // }
    // cout << "d" << endl ;
    if (!disabType.empty() && ((disabType != "TB") &&(disabType != "Orthopedic") && (disabType != "Cancer") && (disabType != "Blind"))){
        Bad_Passenger e ;
        throw e ;
    }
    // cout << "e" << endl ;
    if(categoryName[cat-1] == "Divyaang" && ( disabType.empty() || ( (disabType != "TB") &&(disabType != "Orthopedic") && (disabType != "Cancer") && (disabType != "Blind"))) ){
        Bad_Passenger e ; 
        throw e ; 
    }
    // cout << "f" << endl ;
}

const Passenger& Passenger::createPassenger(const string stname, const string mdname, const string flname, const string aadhaar, string dob, const Gender & g, const string mobNo, unsigned int cat, int disaID, string disabType ) {

    // include exceptions
    string name = "" ;
    
    IsValidPassenger( stname,  mdname,  flname,  aadhaar, dob, g, mobNo, cat,  disaID,disabType ) ; 

    name += (stname + " " + mdname + " " + flname) ;

    Passenger *p = new Passenger(name, aadhaar, dob, g, mobNo, cat, disaID, disabType) ;
    return *p ;

}


ostream& operator<<(ostream & out, const Passenger & p) {
    out << "Passenger's Name            : " << p.GetName() << endl ;
    out << "Passenger's Aadhar Number   : " << p.GetAadharNo() << endl ;
    out << "Passenger's Date of Birth   : " << p.GetDateOfBirth() << endl ;
    out << "Passenger's Gender          : " << p.GetGender() << endl ;
    out << "Passenger's Mobile Number   : " << p.GetMobileNumber() << endl ;
    out << "Passenger's Category        : " << p.GetCategory() << endl ;
    return out ;
}

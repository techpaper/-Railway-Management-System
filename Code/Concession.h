//SAUMYAK RAJ
//19CS30040

#ifndef RailwaySystemConcession_HPP
#define RailwaySystemConcession_HPP

#include <bits/stdc++.h>

using namespace std;

class Concession ; 

class our_set{

    string category_name ; 
    string gender_name ; 
    string bookingClass_name ; 

public:

    our_set(string cat, string gen, string bc_name){
        category_name = cat ; gender_name = gen ; bookingClass_name = bc_name ;
    }

    string getCategory_name() { return category_name ; }; 
    string getGender_name() { return gender_name ; }; 
    string getBookingClass_name() { return bookingClass_name ; }; 

    bool operator<(const our_set& b) ; 

    ~our_set() ; 

    friend class Concession ; 

} ; 

class Concession{

    Concession() ; 
    ~Concession(); 
    
    static map <string, int> Category_idx ; 
    static map <string, int> BookingClass_idx; 
    static map <string, int> Gender_idx ;  

    static map <our_set, float> ConcessionMatrix ; 

    static const vector <vector <double>> Concession_Value; 
    
public: 

    static const Concession& ConcessionFact(){
        static const Concession Concession_ ; return Concession_ ; 
    }

    double getConcessionValue(string cat, string gen, string bc_name) const ; 


} ; 



#endif
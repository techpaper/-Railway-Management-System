//SAUMYAK RAJ
//19CS30040

#ifndef RailwaySystemStation_HPP
#define RailwaySystemStation_HPP

#include <bits/stdc++.h>
#include <ostream>
using namespace std ; 

class Station{
    const string name_ ; 

public:

    Station(const string& n): name_(n) {} ; 
    ~Station() ; 
    string GetName() const {return name_ ; }; 
    int GetDistance (string station2) const ;
    bool operator==(const Station& s) ; 
    friend ostream& operator<<(ostream& out, const Station& s) ; 


} ; 

#endif
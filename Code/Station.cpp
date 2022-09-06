//SAUMYAK RAJ
//19CS30040

#include <bits/stdc++.h>
#include <ostream>
#include "Exceptions.h"
#include "Station.h"
#include "Railways.h"
using namespace std ; 

int Station::GetDistance(string station2) const{
    return Railways::IndianRailways().GetDistance(name_, station2) ;  
}

Station::~Station() {}

bool Station::operator==(const Station &s){
    if(s.GetName() == name_)    return true ; 
    else return false ; 
}

ostream& operator<<(ostream& out, const Station& s){
    out << s.name_ ; return out ; 
}
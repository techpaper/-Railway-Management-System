//SAUMYAK RAJ
//19CS30040

#ifndef RailwaySystemRailways_HPP
#define RailwaySystemRailways_HPP

#include "Station.h"
#include <bits/stdc++.h>
#include <ostream>
#include <string>
using namespace std ; 

class Station ; 

class Railways{

    Railways() ; 
    ~Railways() ; 

    static map<const string, const Station*> sStations ; 
    static map< pair<const Station*, const Station*>, int> sDistStations ; 
    
public:

    static const Railways& IndianRailways(){
        static const Railways IndianRailways_ ; return IndianRailways_ ;  
    }

    int GetDistance(const string& from, const string& destination) const ; 
    
    
} ; 

#endif
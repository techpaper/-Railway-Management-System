//SAUMYAK RAJ
//19CS30040

#include <bits/stdc++.h>
#include "Concession.h"  

using namespace std ; 

our_set::~our_set() {}



bool our_set::operator<(const our_set &other){ 
    if(category_name < other.category_name){ return true ; }
    else {
        if (gender_name < other.gender_name){ return true ; }
        else {
            if(bookingClass_name < other.bookingClass_name){ return true; }
            else { return false ; }
        }
    }
}

Concession::Concession() {}

map<string, int> Concession::Category_idx = {
    {"General", 0}, {"Ladies", 1}, {"Tatkal", 2}, {"Premium Tatkal", 3},{"Senior Citizen", 4},  
    {"TB", 5},{"Orthopedic", 6},{"Cancer", 7},{"Blind", 8} 
} ; 

map<string, int> Concession::BookingClass_idx = {
    {"AC First Class", 0}, {"AC 2 Tier", 1}, {"First Class", 2}, {"AC 3 Tier", 3}, {"AC Chair Char", 4},
    {"Sleeper", 5}, {"Second Sitting", 6}, {"Executive Chair Car", 7}  
} ;

map<string, int> Concession::Gender_idx{
    {"Male", 1}, {"Female", 0} 
} ; 

const vector<vector<double>> Concession::Concession_Value{
    {0.50, 0.50, 0.50, 0.50, 0.50, 0.50, 0.50, 0.50},
    {0.40, 0.40, 0.40, 0.40, 0.40, 0.40, 0.40, 0.40}, 
    {0, 0, 0, 0.75, 0, 0, 0.75, 0.75},
    {0.50, 0.75, 0.50, 0.75, 0.75, 0.75, 0.75, 0.75},
    {0.50, 0.75, 0.50, 0.75, 1, 1, 1, 1},
    {0.50, 0.75, 0.50, 0.75, 0.75, 0.75, 0.75, 0.75}
};

double Concession::getConcessionValue(string cat, string gen, string bc_name) const{

    double ans = 0.0 ; 
    int i = Category_idx[cat] , j = Gender_idx[gen], k = BookingClass_idx[bc_name] ; 
    if(i <= 3)  return ans ; 
    else{
        if(i == 4){
            return Concession_Value[i+j-4][k] ; 
        }
        else{
            return Concession_Value[i-4][k] ; 
        }
    }
}

Concession::~Concession(){}
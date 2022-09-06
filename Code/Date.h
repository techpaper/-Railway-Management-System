//SAUMYAK RAJ
//19CS30040

#ifndef _DATE_H
#define _DATE_H

#include <bits/stdc++.h>
#include <regex> 

using namespace std;
typedef unsigned int UINT;

class Date{
    static const vector<string> sMonthNames;

    
    UINT date_;
    UINT month_;
    string month_name_;
    UINT year_;

    Date(UINT d, UINT m, UINT y);

public:
    
    UINT GiveDate();
    string GiveMonth();
    UINT GiveMonthNo();
    UINT GiveYear();
    static Date createDate(string s);
    
    double CompYear(Date d1) ;


    bool operator==(Date &d1);
    Date& operator=(const Date& d) ; 

    static void UnitTest();

    friend ostream& operator<< (ostream& out, const Date& d) ; 

    static void IsValid(UINT d, UINT m, UINT y) ;

    Date& Curr_Date() ;  

    ~Date();
};

int countLeapYears(Date d);

bool isleap(UINT y) ; 

#endif // _DATE_H
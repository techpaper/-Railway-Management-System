//SAUMYAK RAJ
//19CS30040

#ifndef DATECPP
#define DATECPP

const int MAX_VALID_YR  = 2099 ;
const int MIN_VALID_YR  = 1900 ;

#include "Date.h"
#include "Exceptions.h"

typedef unsigned int UINT;

const vector<string> Date::sMonthNames{"Jan", "Feb", "Mar", "Apr", "May", "Jun","Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

Date::Date(UINT d, UINT m, UINT y) : date_(d), month_(m), year_(y), month_name_("month"){
    month_name_ = sMonthNames[m - 1];
}

UINT Date::GiveDate(){
    return date_;
}
string Date::GiveMonth(){
    return month_name_;
}
UINT Date::GiveMonthNo(){
    return month_;
}
UINT Date::GiveYear(){
    return year_;
}

Date& Date::Curr_Date(){
    return *this ; 
}

double Date::CompYear(Date d2){
    const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    long int n1 = (year_*365)  + date_ ;
    for (int i = 0; i < month_ - 1; i++)
        n1 += monthDays[i];

    n1 += countLeapYears(*this);

    long int n2 = d2.GiveYear() * 365 + d2.GiveDate();
    for (int i = 0; i < d2.GiveMonthNo() - 1; i++)
        n2 += monthDays[i];

    n2 += countLeapYears(d2);
    
    long int diff = (n2 - n1);
    return diff ; 

}

bool Date::operator==(Date &d1){
    return (d1.GiveDate() == date_ && d1.GiveMonth() == month_name_ && d1.GiveYear() == year_);
}

Date::~Date() {}

int countLeapYears(Date d)
{
    int years = d.GiveYear();

    if (d.GiveMonthNo() <= 2)
        years--;

    return years / 4 - years / 100 + years / 400;
}

Date Date::createDate(string s){
    int day, month, year;

    regex r("(^(((0[1-9]|1[0-9]|2[0-8])[\\/](0[1-9]|1[012]))|((29|30|31)[\\/](0[13578]|1[02]))|((29|30)[\\/](0[4,6,9]|11)))[\\/](19|[2-9][0-9])\\d\\d$)|(^29[\\/]02[\\/](19|[2-9][0-9])(00|04|08|12|16|20|24|28|32|36|40|44|48|52|56|60|64|68|72|76|80|84|88|92|96)$)");

    if (regex_match(s, r)){
        
        day = stoi(s.substr(0, 2));
        month = stoi(s.substr(3, 2));
        year = stoi(s.substr(6));

        Date::IsValid(day, month, year) ; 

        Date d(day, month, year);
        return d;
    }
    else{
        Bad_Date e ; 
        throw e ; 
    }
}

ostream& operator<<(ostream& out, const Date& d){
    out << d.date_ << "/" <<  d.month_name_ << "/" << d.year_;
    return out ; 
}

Date& Date::operator=(const Date& d){
    date_ = d.date_ ; month_ = d.month_; year_ = d.year_; month_name_ = d.month_name_ ; 
    return *this ; 
}

bool isleap(UINT year){
    if (year % 400 == 0)
        return true;
 
    if (year % 100 == 0)
        return false;
 
    if (year % 4 == 0)
        return true;

    return false; 
}

void Date::IsValid(UINT d, UINT m, UINT y){
    // try{
    if (y > MAX_VALID_YR || y < MIN_VALID_YR)
        // year within range
        throw Bad_Date();

    if (m < 1 || m > 12)
        throw Bad_Date(); // month withing range
    if (d < 1 || d > 31)
        throw Bad_Date(); // date not greater than 31

    if (m == 2){
        if (isleap(y))
        {
            if (d > 29)
                throw Bad_Date();
        }
        else
        {
            if (d > 28)
                throw Bad_Date();
        }
    }
    if (m == 4 || m == 6 || m == 9 || m == 11){

        if (d > 30) // months with 30 days
            throw Bad_Date();
    }
    // }
    // catch (const Bad_Date &e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
}




#endif
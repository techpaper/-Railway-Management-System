//SAUMYAK RAJ
//19CS30040

#ifndef _BOOKINGCT_H
#define _BOOKINGCT_H

#include <bits/stdc++.h>

#include "Concession.h"

using namespace std;

// Forward declaration of templatized class
template <typename T>
class Categories; // Generic Gender type to generate specific genders

// Generic Booking Category type
class BookingCategories
{                        
    // Abstract Base Class
    const string &name_; // Name of the BookingClass

    struct GeneralType{};
    struct SeniorCitizenType{};
    struct LadiesType{};
    struct TatkalType{};
    struct PremiumTatkalType{};

protected:
    BookingCategories(const string &name) : name_(name) {}
    virtual ~BookingCategories() {}

public:

    virtual const string GetName() const = 0;
    virtual const double GetConcessionFactor(string gender, string booking_class) const = 0;

    // Enumerated types - the target sub-types
    typedef Categories<GeneralType> General;
    typedef Categories<SeniorCitizenType> SeniorCitizen;
    typedef Categories<LadiesType> Ladies;
    typedef Categories<TatkalType> Tatkal;
    typedef Categories<PremiumTatkalType> PremiumTatkal;
};


// Specific booking class types
template <typename T>
class Categories : public BookingCategories
{
    static const string sName;       // Respective name of the booking class
    // static const double sConcessionFactor;
    
    Categories(const string &name = Categories<T>::sName) : BookingCategories(name) {}
    ~Categories() {}

public:
    static const Categories<T> &Type(){
        static const Categories<T> theObject; // May be non-const for changeable behavior
        return theObject;
    }

    const double GetConcessionFactor(string gender, string booking_class) const {
        return Concession::ConcessionFact().getConcessionValue(sName, gender, booking_class);
    }

    const string GetName() const {
        return Categories<T>::sName;
    }
};

template <typename T>

class DivyaangTypes; 

class Divyaang : public BookingCategories{                        
    const string &name_; 

    struct TBType{};
    struct OrthopedicType{};
    struct CancerType{};
    struct BlindType{};

protected:
    Divyaang(const string &name) : BookingCategories(name), name_(name) {}
    virtual ~Divyaang() {}

public:        

    typedef DivyaangTypes<TBType> TB;
    typedef DivyaangTypes<OrthopedicType> Orthopedic;
    typedef DivyaangTypes<CancerType> Cancer;
    typedef DivyaangTypes<BlindType> Blind;
};

template <typename T>
class DivyaangTypes : public Divyaang
{
    static const string sName;       
     
    DivyaangTypes(const string &name = DivyaangTypes<T>::sName) : Divyaang(name) {}
    ~DivyaangTypes() {}

public:
    static const DivyaangTypes<T> &Type(){
        static const DivyaangTypes<T> theObject; 
        return theObject;
    }
    const string GetName() const {
        return DivyaangTypes<T>::sName;
    } 
    const double GetConcessionFactor(string gender, string booking_class) const {
        return Concession::ConcessionFact().getConcessionValue(sName, gender, booking_class);
    }
};
    




#endif 

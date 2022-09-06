//SAUMYAK RAJ
//19CS30040

#ifndef _BOOKINGCL_H
#define _BOOKINGCL_H
#include <bits/stdc++.h>

using namespace std;

template <typename T>
class BClass; 

class BookingClasses{                        
    const string &name_; // Name of the BookingClass

    struct ACFirstClassType{};
    struct AC2TierType{};
    struct AC3TierType{};
    struct FirstClassType{};
    struct ACChairCarType{};
    struct ExecutiveChairCarType{};
    struct SleeperType{};
    struct SecondSittingType{};

protected:
    BookingClasses(const string &name) : name_(name) {}
    virtual ~BookingClasses() {} 

public:

    virtual const string GetName() const = 0;
    virtual const bool IsSitting() const = 0;
    virtual const int GetNumberOfTiers() const = 0;
    virtual const double GetLoadFactor() const =0; 
    virtual const bool IsAC() const = 0;
    virtual const bool IsLuxury() const = 0;
    virtual const int GetMinTatkalCharge() const = 0 ; 
    virtual const int GetMaxTatkalCharge() const = 0 ; 
    virtual const int GetMinTatkalDistance() const = 0 ; 
    virtual const double GetTatkalLoadFactor() const = 0 ; 
    virtual const double GetReservationCharge() const = 0 ; 
    
    // virtual void UnitTest() = 0 ; 

    // Enumerated types - the target sub-types
    typedef BClass<ACFirstClassType> ACFirstClass;
    typedef BClass<AC2TierType> AC2Tier;
    typedef BClass<AC3TierType> AC3Tier;
    typedef BClass<FirstClassType> FirstClass;
    typedef BClass<ACChairCarType> ACChairCar;
    typedef BClass<ExecutiveChairCarType> ExecutiveChairCar;
    typedef BClass<SleeperType> Sleeper;
    typedef BClass<SecondSittingType> SecondSitting;
};

// Specific booking class types
template <typename T>

class BClass : public BookingClasses
{
    static const string sName;       // Respective name of the booking class
    static const double sloadFactor;
    static const bool AC;
    static const bool Luxury;
    static const double LoadFactor_ ;
    static const double TatkalLoadFactor ;
    static const int min_TatkalCharge;
    static const int max_TatkalCharge;
    static const int min_TatkalDist;
    static const double reservationCharge ;
    static const bool sitting ; 
    static const int tiers ;  

    BClass(const string &name = BClass<T>::sName) : BookingClasses(name) {}
    ~BClass() {}

public:

    static const BClass<T> &Type(){
        static const BClass<T> theObject; // May be non-const for changeable behavior
        return theObject;
    }
    const double GetLoadFactor() const {
        return BClass<T>::sloadFactor;
    }
    const string GetName() const {
        return BClass<T>::sName;
    }
    const bool IsLuxury() const {
        return BClass<T>::Luxury;
    }
    const bool IsAC() const {
        return BClass<T>::AC;
    }
    const bool IsSitting() const {
        return BClass<T>::sitting ; 
    }
    const int GetNumberOfTiers() const{
        return BClass<T>::tiers ; 
    }
    const int GetMinTatkalCharge() const{
        return BClass<T>::min_TatkalCharge ; 
    }
    const int GetMaxTatkalCharge() const{
        return BClass<T>::max_TatkalCharge ; 
    }
    const int GetMinTatkalDistance() const{
        return BClass<T>::min_TatkalDist ; 
    }
    const double GetTatkalLoadFactor() const{
        return BClass<T>::TatkalLoadFactor ; 
    }
    const double GetReservationCharge() const{
        return BClass<T>::reservationCharge ; 
    }
    // void UnitTest() ; 
};

ostream& operator<<(ostream& out, const BookingClasses& bClass) ; 

#endif //_BOOKINGCL_H

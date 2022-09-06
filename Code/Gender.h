//SAUMYAK RAJ
//19CS30040

#ifndef _GENDER_H
#define _GENDER_H

#include <bits/stdc++.h>

using namespace std; 

// Forward declaration of templatized class
template <typename T>
class GenderTypes; 

class Gender{             
    const string &name_; 
    struct MaleType{};
    struct FemaleType{};

protected:
    Gender(const string &name) : name_(name) {}
    virtual ~Gender() {}

public:
    const string &GetName() const { return name_; }
    virtual const string GetTitle() const = 0; // Salutation specific to gender
    static bool IsMale(const Gender &);        // Checking and matching gender

    // Enumerated types - the target sub-types
    typedef GenderTypes<MaleType> Male;
    typedef GenderTypes<FemaleType> Female;
};

// Specific gender  types
template <typename T>

class GenderTypes : public Gender{
    static const string sName;       // Respective name of the gender
    static const string sSalutation; // Respective salutation for the gender
    
    GenderTypes(const string &name = GenderTypes<T>::sName) : Gender(name) {}
    ~GenderTypes() {}

public:
    // Singleton object - placeholder for the respective type
    static const GenderTypes<T> &Type(){
        static const GenderTypes<T> theObject; // May be non-const for changeable behavior
        return theObject;
    }
    const string GetTitle() const {
        return GenderTypes<T>::sSalutation;
    } // Salutation parametrized by static
};

inline bool Gender::IsMale(const Gender &g) { return &g == &Gender::Male::Type(); }
#endif
// __GENDER_H#endif // __GENDER_H
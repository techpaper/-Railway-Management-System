//SAUMYAK RAJ
//19CS30040

#ifndef _BOOKINGCT_CPP
#define _BOOKINGCT_CPP

#include "BookingCategories.h"

template <>
const string BookingCategories::General::sName = "General";

template <>
const string BookingCategories::SeniorCitizen::sName = "Senior Citizen";

template <>
const string BookingCategories::Ladies::sName = "Ladies";

template <>
const string BookingCategories::Tatkal::sName = "Tatkal";

template <>
const string BookingCategories::PremiumTatkal::sName = "Premium Tatkal";


template <>
const string Divyaang::TB::sName = "TB";

template <>
const string Divyaang::Orthopedic::sName = "Orthopedic";

template <>
const string Divyaang::Cancer::sName = "Cancer";

template <>
const string Divyaang::Blind::sName = "Blind";

#endif
/*
    Comparisons.hpp

    Declarations for a set of utility comparisons
*/

#ifndef INCLUDED_COMPARISONS_HPP
#define INCLUDED_COMPARISONS_HPP

#include <string_view>

// is the number positive
bool isPositive(int n);

// is the number negative
bool isNegative(int n);

// is the number positive
bool isNonNegative(int n);

// is the number even
bool isEven(int n);

// is the number odd
bool isOdd(int n);

// is the person a minor
bool isMinor(int age);

// is the user logged in
bool isLoggedIn(std::string_view status);

// is it freezing
bool isFreezing(int temperature);

// is the character a vowel
bool isVowel(char c);

// is the year a leap year
bool isLeapYear(int year);

// is a password strong
bool isStrongPassword(std::string_view password);

// are two strings are (case insensitive) equal
bool areStringsEqualIgnoreCase(std::string_view s1, std::string_view s2);

// is the number within a range
bool inRange(int n, int min, int max);

// is the user an admin
bool isAdmin(std::string_view role);

// is the point inside the circle
bool isPointInCircle(double x, double y, double circleX, double circleY, double radius);

#endif


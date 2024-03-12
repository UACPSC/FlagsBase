/*
    Comparisons.cpp

    Definitions for a set of utility comparisons
*/

#include <string_view>
#include <vector>
#include <algorithm>
#include <strings.h>

using namespace std::literals::string_view_literals;

// is the number positive
bool isPositive(int n) {
    if (n > 0 == true)
        return true;
    else
        return false;
}

// is the number negative
bool isNegative(int n) {
    if (n < 0 == true)
        return true;
    else
        return false;
}

// is the number positive
bool isNonNegative(int n) {
    if (n < 0 == false)
        return true;
    else
        return false;
}

// is the number even
bool isEven(int n) {
    if (n % 2 == 0)
        return true;
    else
        return false;
}

// is the number odd
bool isOdd(int n) {
    if (n % 2 != 0)
        return true;
    else
        return false;
}

// is the person a minor
bool isMinor(int age) {
    if (age < 18)
        return true;
    else
        return false;
}

// is the user logged in
bool isLoggedIn(std::string_view status) {
    if (status == "loggedIn"sv)
        return true;
    else
        return false;
}

// is it freezing
bool isFreezing(int temperature) {
    if (temperature <= 0)
        return true;
    else
        return false;
}

// is the character a vowel
bool isVowel(char c) {
    if ("aeiou"sv.find(tolower(c)) != std::string_view::npos)
        return true;
    else
        return false;
}

// is the year a leap year
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    else
        return false;
}

// is a password strong
bool isStrongPassword(std::string_view password) {
    if (password.length() >= 8 && std::any_of(password.begin(), password.end(), ::isdigit) && std::any_of(password.begin(), password.end(), ::isupper))
        return true;
    else
        return false;
}

// are two strings are (case insensitive) equal
bool areStringsEqualIgnoreCase(std::string_view s1, std::string_view s2) {
    if (s1.size() == s2.size() && strncasecmp(s1.data(), s2.data(), s1.size()) == 0)
        return true;
    else
        return false;
}

// is the number within a range
bool inRange(int n, int min, int max) {
    if (n >= min && n <= max)
        return true;
    else
        return false;
}

// is the user an admin
bool isAdmin(std::string_view role) {
    if (role == "admin"sv)
        return true;
    else
        return false;
}

// is the point inside the circle
bool isPointInCircle(double x, double y, double circleX, double circleY, double radius) {
    if (std::sqrt((x - circleX) * (x - circleX) + (y - circleY) * (y - circleY)) < radius)
        return true;
    else
        return false;
}

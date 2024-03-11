#include <iostream>
#include <cmath>
#include <string_view>
#include <vector>
#include <algorithm>
#include <strings.h>
#include <assert.h>

using namespace std::literals::string_view_literals;

// is the number positive
bool isPositive(int num) {
    if (num > 0 == true)
        return true;
    else
        return false;
}

// is the number negative
bool isNegative(int num) {
    if (num < 0 == true)
        return true;
    else
        return false;
}

// is the number positive
bool isNonNegative(int num) {
    if (num < 0 == false)
        return true;
    else
        return false;
}

// is the number even
bool isEven(int num) {
    if (num % 2 == 0)
        return true;
    else
        return false;
}

// is the number odd
bool isOdd(int num) {
    if (num % 2 != 0)
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
bool isFreezing(int temp) {
    if (temp <= 0)
        return true;
    else
        return false;
}

// is the character a vowel
bool isVowel(char ch) {
    if ("aeiou"sv.find(tolower(ch)) != std::string_view::npos)
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
bool inRange(int num, int min, int max) {
    if (num >= min && num <= max)
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

int main() {
    // isPositive
    assert(isPositive(1) == true);
    assert(isPositive(-1) == false);
    assert(isPositive(0) == false);

    // isNegative
    assert(isNegative(-1) == true);
    assert(isNegative(1) == false);
    assert(isNegative(0) == false);

    // isNonNegative
    assert(isNonNegative(1) == true);
    assert(isNonNegative(0) == true);
    assert(isNonNegative(-1) == false);

    // isEven
    assert(isEven(2) == true);
    assert(isEven(3) == false);
    assert(isEven(0) == true);

    // isOdd
    assert(isOdd(3) == true);
    assert(isOdd(2) == false);
    assert(isOdd(0) == false);

    // isMinor
    assert(isMinor(17) == true);
    assert(isMinor(18) == false);
    assert(isMinor(20) == false);

    // isLoggedIn
    assert(isLoggedIn("loggedIn"sv) == true);
    assert(isLoggedIn("loggedOut"sv) == false);

    // isFreezing
    assert(isFreezing(0) == true);
    assert(isFreezing(-1) == true);
    assert(isFreezing(1) == false);

    // isVowel
    assert(isVowel('a') == true);
    assert(isVowel('b') == false);
    assert(isVowel('A') == true); // Checking case-insensitivity

    // isLeapYear
    assert(isLeapYear(2000) == true);
    assert(isLeapYear(1900) == false);
    assert(isLeapYear(2012) == true);
    assert(isLeapYear(2013) == false);

    // isStrongPassword
    assert(isStrongPassword("Passw0rd"sv) == true);
    assert(isStrongPassword("passw0rd"sv) == false); // Missing uppercase
    assert(isStrongPassword("Password"sv) == false); // Missing digit
    assert(isStrongPassword("Pw0"sv) == false); // Too short

    // areStringsEqualIgnoreCase
    assert(areStringsEqualIgnoreCase("hello"sv, "HELLO"sv) == true);
    assert(areStringsEqualIgnoreCase("hello"sv, "world"sv) == false);

    // inRange
    assert(inRange(5, 1, 10) == true);
    assert(inRange(-1, 0, 5) == false);
    assert(inRange(11, 1, 10) == false);

    // isAdmin
    assert(isAdmin("admin"sv) == true);
    assert(isAdmin("user"sv) == false);

    // isPointInCircle
    assert(isPointInCircle(0, 0, 0, 0, 1) == true); // Center of the circle
    assert(isPointInCircle(1, 1, 0, 0, 1) == false); // Outside the circle
    assert(isPointInCircle(0.5, 0.5, 0, 0, 1) == true); // Inside the circle

    return 0;
}

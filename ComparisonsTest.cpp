/*
    ComparisonsTest.cpp

    Test for a set of comparisons
*/

#include "Comparisons.hpp"
#include <string_view>
#include <assert.h>

using namespace std::literals::string_view_literals;

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
    // case-insensitivity
    assert(isVowel('A') == true);

    // isLeapYear
    assert(isLeapYear(2000) == true);
    assert(isLeapYear(1900) == false);
    assert(isLeapYear(2012) == true);
    assert(isLeapYear(2013) == false);

    // isStrongPassword
    assert(isStrongPassword("Passw0rd"sv) == true);
    // Missing uppercase
    assert(isStrongPassword("passw0rd"sv) == false);
    // Missing digit
    assert(isStrongPassword("Password"sv) == false);
    // Too short
    assert(isStrongPassword("Pw0"sv) == false);

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
    // center of the circle
    assert(isPointInCircle(0, 0, 0, 0, 1) == true);
    // outside the circle
    assert(isPointInCircle(1, 1, 0, 0, 1) == false);
    // inside the circle
    assert(isPointInCircle(0.5, 0.5, 0, 0, 1) == true);

    return 0;
}

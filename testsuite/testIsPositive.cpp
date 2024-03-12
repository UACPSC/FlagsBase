/*
    testIsPositive.cpp

    Test isPositive() comparison
*/

#include "Comparisons.hpp"
#include <assert.h>

int main() {

    // isPositive
    assert(isPositive(1) == true);
    assert(isPositive(-1) == false);
    assert(isPositive(0) == false);

    return 0;
}

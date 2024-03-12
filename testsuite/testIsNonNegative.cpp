/*
    isNonNegative.cpp

    Test isNonNegative() comparison
*/

#include "Comparisons.hpp"
#include <assert.h>

int main() {

    // isNonNegative
    assert(isNonNegative(1) == true);
    assert(isNonNegative(0) == true);
    assert(isNonNegative(-1) == false);

    return 0;
}

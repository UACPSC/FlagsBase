/*
    isNegative.cpp

    Test isNegative() comparison
*/

#include "Comparisons.hpp"
#include <assert.h>

int main() {

    // isNegative
    assert(isNegative(-1) == true);
    assert(isNegative(1) == false);
    assert(isNegative(0) == false);

    return 0;
}

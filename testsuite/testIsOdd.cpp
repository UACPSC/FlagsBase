/*
    isOdd.cpp

    Test isOdd() comparison
*/

#include "Comparisons.hpp"
#include <assert.h>

int main() {

    // isOdd
    assert(isOdd(3) == true);
    assert(isOdd(2) == false);
    assert(isOdd(0) == false);

    return 0;
}

/*
    isEven.cpp

    Test isEven() comparison
*/

#include "Comparisons.hpp"
#include <assert.h>

int main() {

    // isEven
    assert(isEven(2) == true);
    assert(isEven(3) == false);
    assert(isEven(0) == true);

    return 0;
}

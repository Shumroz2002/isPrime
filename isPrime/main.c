#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "isPrime.h"

// SHUMROZ USMANI -- WINTER 2025 -- 

    // -> if it gives remainder zero iff when it is divied by one or itself
    // !!!! BE CAREFULL ZERO AND ONE ARE NOT PRIME
    // DO NOT TAKE ANY NEGATIVE NUMBERS 


    // create a loop to check all the numbers upto it 



int main() {

    
    // PRIME CHECK

    testCases(2, true);
    testCases(3, true);
    testCases(5, true);
    testCases(7, true);

    // NON - PRIME CHECK
    testCases(4, false);
    testCases(6, false);
    testCases(8, false);

    // 0 & 1 CHECK
    testCases(0, false);
    testCases(1, false);

    return 0;
}
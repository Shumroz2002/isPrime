#include <stdio.h>
#include <stdlib.h>
#include "stdbool.h"

bool isPrime(int userInput) {

    int factor = 0;

    if (userInput == 0 || userInput == 1 || userInput < 0) {

        printf("0, 1, Or Negative Numbers Are Not Prime\nPlease Enter a Positive Integer\n");
        
    }

    for (int i = 1; i <= userInput; i++) {



        if (userInput % i == 0) {

            factor++;
        }
    }

    if (factor == 2) {

        printf("It is a Prime Number !\n");
        return true;
    }
    else {
        printf("It is not a Prime Number !\n");
        return false;
    }


}

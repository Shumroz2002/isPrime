#include <stdio.h>
#include<stdbool.h>
#include "isPrime.h"

void testCases(int x , bool expected) {
		

	printf("Test Case FOR -> %d\n", x);


	bool result = isPrime(x);
	
	        if (expected == result) {

				printf("PASSED\n\n");
				
			}
			else if (expected != result) {
				
				printf("FAILED\n\n");
				
			}
}

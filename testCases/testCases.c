#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void testCases(int actual, int expected, int result) {

	if (expected == result) {

		printf("PASSED\n");
	}
	else printf("FAILED\n");

}
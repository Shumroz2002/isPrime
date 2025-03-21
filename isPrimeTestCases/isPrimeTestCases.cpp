#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace isPrimeTestCases
{
	TEST_CLASS(isPrimeTestCases)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			void testCases(int x, bool expected) {


				printf("Test Case FOR -> %d\n", x);


				bool result = isPrime(x);

				if (expected == result) {

					printf("PASSED\n\n");

				}
				else if (expected != result) {

					printf("FAILED\n\n");

				}
			}

		}
	};
}

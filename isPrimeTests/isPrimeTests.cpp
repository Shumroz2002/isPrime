#include "pch.h"  // Must be the first include!
#include "CppUnitTest.h"

extern "C" {
#include "isPrime.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace isPrimeTests
{
    TEST_CLASS(isPrimeTests)
    {
    public:
        TEST_METHOD(TestPrimeNumbers)
        {
            Assert::IsTrue(isPrime(2));
            Assert::IsTrue(isPrime(3));
            Assert::IsTrue(isPrime(5));
        }

        TEST_METHOD(TestNonPrimeNumbers)
        {
            Assert::IsFalse(isPrime(4));
            Assert::IsFalse(isPrime(6));
            Assert::IsFalse(isPrime(9));
        }

        TEST_METHOD(TestEdgeCases)
        {
            Assert::IsFalse(isPrime(0));
            Assert::IsFalse(isPrime(1));
            Assert::IsFalse(isPrime(-5));
        }
    };
}

#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../isPrime/isPrime.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestscpp
{
	TEST_CLASS(UnitTestscpp)
	{
	public:
		
		TEST_METHOD(isPrime_T01)
		{
			bool expected = true;
			bool actual = isPrime(2);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(isPrime_T02)
		{
			bool expected = true;
			bool actual = isPrime(3);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(isPrime_T03)
		{
			bool expected = true;
			bool actual = isPrime(5);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(isPrime_T04)
		{
			bool expected = true;
			bool actual = isPrime(7);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(isPrime_T05)
		{
			bool expected = false;
			bool actual = isPrime(4);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(isPrime_T06)
		{
			bool expected = false;
			bool actual = isPrime(6);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(isPrime_T07)
		{
			bool expected = false;
			bool actual = isPrime(8);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(isPrime_T08)
		{
			bool expected = false;
			bool actual = isPrime(1);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(isPrime_T09)
		{
			bool expected = false;
			bool actual = isPrime(0);
			Assert::AreEqual(expected, actual);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int r[n] = { 12, 5, 6, 15, 18 };
			int count_element = 0;
			int expected_sum = 56;
			int expected_count = 5;

			int actual_sum = Sum(r, n, 0, 0, count_element);

			Assert::AreEqual(expected_sum, actual_sum);

			Assert::AreEqual(expected_count, count_element);

			Assert::AreEqual(0, r[0]);
			Assert::AreEqual(0, r[1]);
			Assert::AreEqual(0, r[2]);
			Assert::AreEqual(0, r[3]);
			Assert::AreEqual(0, r[4]);
		}
	};
}

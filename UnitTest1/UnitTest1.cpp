#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestSumElements)
		{
			const int n = 5;
			int r[n] = { 12, 5, 6, 15, 18 };

			int expected_sum = 56;

			int actual_sum = SumElements(r, n, 0);

			Assert::AreEqual(expected_sum, actual_sum);
		}

		TEST_METHOD(TestCountElements)
		{
			const int n = 5;
			int r[n] = { 12, 5, 6, 15, 18 };

			int expected_count = 5;

			int count_element = 0;
			CountElements(r, n, 0, count_element);

			Assert::AreEqual(expected_count, count_element);
		}

		TEST_METHOD(TestReplaceElements)
		{
			const int n = 5;
			int r[n] = { 12, 5, 6, 15, 18 };

			ReplaceElements(r, n, 0);

			Assert::AreEqual(0, r[0]);
			Assert::AreEqual(0, r[1]);
			Assert::AreEqual(0, r[2]);
			Assert::AreEqual(0, r[3]);
			Assert::AreEqual(0, r[4]);
		}
	};
}

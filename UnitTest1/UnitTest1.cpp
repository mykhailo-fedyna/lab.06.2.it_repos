#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1_MaxEven)
		{
			const int n = 6;
			int arr[n] = { 3, 10, 2, 5, 8, 1 };

			int expectedMax = 10;
			int actualMax = Max(arr, n);

			Assert::AreEqual(expectedMax, actualMax);
		}

		TEST_METHOD(TestMethod2_MaxEvenIndex)
		{
			const int n = 6;
			int arr[n] = { 3, 10, 2, 5, 8, 1 };

			int expectedIndex = 1;
			int actualIndex = MaxIndex(arr, n);

			Assert::AreEqual(expectedIndex, actualIndex);
		}

		TEST_METHOD(TestMethod3_NoEvenNumbers)
		{
			const int n = 5;
			int arr[n] = { 3, 9, 7, 5, 1 };

			int expectedIndex = 0;
			int actualIndex = MaxIndex(arr, n);

			Assert::AreEqual(expectedIndex, actualIndex);
		}
	};
}

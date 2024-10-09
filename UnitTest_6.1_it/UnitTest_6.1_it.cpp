#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_06.1/lab_06.1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61it
{
	TEST_CLASS(UnitTest61it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int mas[] = {1,3,5,7,9,2,4,6,8};
			Assert::AreEqual(counter(mas,9), 5);
		}
		TEST_METHOD(TestMethod2)
		{
			int mas[] = { 1,3,5,7,9,2,4,6,8 };
			Assert::AreEqual(sum(mas, 9), 25);
		}
	};
}

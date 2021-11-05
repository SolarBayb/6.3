#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int M[4] = { -3,4, 2, -5 };
			int S = NeSumArr(M, 4,0);
			Assert::AreEqual(S,-8);
		}
	};
}

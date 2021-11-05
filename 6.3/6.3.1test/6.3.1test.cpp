#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My631test
{
	TEST_CLASS(My631test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int M[4] = { -3,4, 1, -2 };
			int S = NeSumArr(M, 4);
			Assert::AreEqual(S,-5);
		}
	};
}

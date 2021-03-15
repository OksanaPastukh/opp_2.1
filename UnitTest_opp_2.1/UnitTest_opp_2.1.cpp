#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_opp_2.1/Pay.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp21
{
	TEST_CLASS(UnitTestopp21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			Pay a(1.5, 20);
			c = a.Summa(30);
			Assert::AreEqual(c, 1.0);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_2/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestFind)
		{
			string a = "bsd nsn asa sus asus";
			string result = Find(a);
			Assert::AreEqual(string("asa"), result);

		}
	};
}

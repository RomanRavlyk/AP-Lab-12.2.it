#include "pch.h"
#include "CppUnitTest.h"
#include "..//AP Lab 12.2.it/AP Lab 12.2.it.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Elem* list = nullptr;

			for (int i = 0; i < 10; i++) {
				append(list, i);
			}

			Assert::AreEqual(20, calculatesumnotuples(list));
		}
	};
}

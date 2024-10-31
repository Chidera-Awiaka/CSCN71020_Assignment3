#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_RockBeatsScissors)
		{
			char* result = determineWinner("Rock", "Scissors");
			Assert::AreEqual("Player1", result); // Expected Player1 wins
		}
	};
}

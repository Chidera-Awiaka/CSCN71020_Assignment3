#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../CSCN71020_Assignment3/main.h"
}

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
        TEST_METHOD(Test_ScissorsBeatsPaper)
        {
            char* result = determineWinner("Scissors", "Paper");
            Assert::AreEqual("Player1", result); // Expected Player1 wins
        }

        TEST_METHOD(Test_PaperBeatsRock)
        {
            char* result = determineWinner("Paper", "Rock");
            Assert::AreEqual("Player1", result); // Expected Player1 wins
        }

        TEST_METHOD(Test_Draw)
        {
            char* result = determineWinner("Rock", "Rock");
            Assert::AreEqual("Draw", result); // Expected Draw
        }

        TEST_METHOD(Test_InvalidInput)
        {
            char* result = determineWinner("Lizard", "Rock");
            Assert::AreEqual("Invalid", result); // Expected Invalid
        }
	};
}

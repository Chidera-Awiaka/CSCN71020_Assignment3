// unittest.cpp
#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "../CSCN71020_Assignment3/main.h"  // Include the main header for function access
}


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(Test_RockBeatsScissors) //Test for Rock vs Scissors
        {
            char player1[] = "Rock";
            char player2[] = "Scissors";
            Assert::AreEqual("Player1", determineWinner(player1, player2));
        }

        TEST_METHOD(Test_ScissorsBeatsPaper)//Test for Scissors Vs Paper
        {
            char player1[] = "Scissors";
            char player2[] = "Paper";
            Assert::AreEqual("Player1", determineWinner(player1, player2));
        }

        TEST_METHOD(Test_PaperBeatsRock)//Test for Paper vs Rock
        {
            char player1[] = "Paper";
            char player2[] = "Rock";
            Assert::AreEqual("Player1", determineWinner(player1, player2));
        }

        TEST_METHOD(Test_Draw)//TESt for a draw
        {
            char player1[] = "Rock";
            char player2[] = "Rock";
            Assert::AreEqual("Draw", determineWinner(player1, player2));
        }

        TEST_METHOD(Test_InvalidInput)//Tsey for an Invalid input
        {
            char player1[] = "Lizard";
            char player2[] = "Rock";
            Assert::AreEqual("Invalid", determineWinner(player1, player2));
        }
    };
}

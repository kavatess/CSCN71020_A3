#include "pch.h"
#include "string.h"
#include "CppUnitTest.h"

// Tell compiler this is external and written in C
extern "C" char* playRockPaperScissorGame(char player1[], char player2[]);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020A3TDD
{
	TEST_CLASS(CSCN71020A3TDD)
	{
	public:
		
		TEST_METHOD(Test_Rock_Rock_Return_Draw)
		{
			// Declare variables to store two player inputs
			char player1[] = "Rock";
			char player2[] = "Rock";
			// Declare variables to store the actual and expected results
			char expected[] = "Draw";
			char* actual;

			// Call playRockPaperScissorGame function and store the result to 'actual' var
			actual = playRockPaperScissorGame(player1, player2);

			// Check if actual result of the function equal to the expected result
			bool isActualEqualExpected = strcmp(actual, expected) == 0;
			Assert::IsTrue(isActualEqualExpected);
		}
		TEST_METHOD(Test_Rock_Paper_Return_Player2)
		{
			// Declare variables to store two player inputs
			char player1[] = "Rock";
			char player2[] = "Paper";
			// Declare variables to store the actual and expected results
			char expected[] = "Player2";
			char* actual;

			// Call playRockPaperScissorGame function and store the result to 'actual' var
			actual = playRockPaperScissorGame(player1, player2);

			// Check if actual result of the function equal to the expected result
			bool isActualEqualExpected = strcmp(actual, expected) == 0;
			Assert::IsTrue(isActualEqualExpected);
		}

		TEST_METHOD(Test_rock_Paper_Return_Invalid)
		{
			// Declare variables to store two player inputs
			char player1[] = "rock";
			char player2[] = "Paper";
			// Declare variables to store the actual and expected results
			char expected[] = "Invalid";
			char* actual;

			// Call playRockPaperScissorGame function and store the result to 'actual' var
			actual = playRockPaperScissorGame(player1, player2);

			// Check if actual result of the function equal to the expected result
			bool isActualEqualExpected = strcmp(actual, expected) == 0;
			Assert::IsTrue(isActualEqualExpected);
		}
	};
}

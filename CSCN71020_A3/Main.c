#include <stdio.h>
#include <string.h>

char* playRockPaperScissorGame(char player1[], char player2[]);

char* playRockPaperScissorGame(char player1[], char player2[])
{
	// Check if player1 is not a valid string of "Rock", "Paper" & "Scissors"
	if (strcmp(player1, "Rock") != 0 && strcmp(player1, "Paper") != 0 && strcmp(player1, "Scissors") != 0)
		return "Invalid";
	// Check if player2 is not a valid string of "Rock", "Paper" & "Scissors"
	if (strcmp(player2, "Rock") != 0 && strcmp(player2, "Paper") != 0 && strcmp(player2, "Scissors") != 0)
		return "Invalid";

	// Return Draw if two players have the same inputs
	if (strcmp(player1, player2) == 0) {
		return "Draw";
	}

	// If Player1 shapes Rock, then Player2 shapes Paper => Player2 wins, otherwise Player1 wins
	if (strcmp(player1, "Rock") == 0) {
		return strcmp(player2, "Paper") == 0 ? "Player2" : "Player1";
	}
	// If Player1 shapes Paper, then Player2 shapes Scissors => Player2 wins, otherwise Player1 wins
	if (strcmp(player1, "Paper") == 0) {
		return strcmp(player2, "Scissors") == 0 ? "Player2" : "Player1";
	}
	// If Player1 shapes Scissors, then Player2 shapes Rock => Player2 wins, otherwise Player1 wins
	if (strcmp(player1, "Scissors") == 0) {
		return strcmp(player2, "Rock") == 0 ? "Player2" : "Player1";
	}
	
	return "Invalid";
}

void main()
{
	return;
}
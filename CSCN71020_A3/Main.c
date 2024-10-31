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

	if (strcmp(player1, player2) == 0) {
		return "Draw";
	}

	if (strcmp(player1, "Rock") == 0) {
		return strcmp(player2, "Paper") == 0 ? "Player2" : "Player1";
	}
	if (strcmp(player1, "Paper") == 0) {
		return strcmp(player2, "Scissors") == 0 ? "Player2" : "Player1";
	}
	if (strcmp(player1, "Scissors") == 0) {
		return strcmp(player2, "Rock") == 0 ? "Player2" : "Player1";
	}
	
	return "Invalid";
}

void main()
{
	return;
}
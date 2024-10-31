// main.c
#include <stdio.h>
#include <string.h>
#include "main.h"

// Function implementation
char* determineWinner(char player1[], char player2[]) {
    // Check for valid inputs first
    if ((strcmp(player1, "Rock") != 0 && strcmp(player1, "Paper") != 0 && strcmp(player1, "Scissors") != 0) ||
        (strcmp(player2, "Rock") != 0 && strcmp(player2, "Paper") != 0 && strcmp(player2, "Scissors") != 0)) {
        return "Invalid";  // Return "Invalid" if either input is not "Rock", "Paper", or "Scissors"
    }

    // Determine the outcome based on game rules
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }
    else if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0)) {
        return "Player1";
    }
    else {
        return "Player2";
    }
}

// main function for standalone testing
int main() {
    char player1[] = "Rock";
    char player2[] = "Scissors";
    printf("Result: %s\n", determineWinner(player1, player2)); // Expected output: "Player1"
    return 0;
}


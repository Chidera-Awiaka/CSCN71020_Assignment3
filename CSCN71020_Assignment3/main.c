// main.c file 
#include <string.h>
#include "main.h"

char* determineWinner(const char* player1, const char* player2) {
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) {
        return "Player1"; //If rock vs scissors, rock wins
    }
    else if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) {
        return "Player1"; //If scissors vs paper, scissors wins
    }
    else if (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) {
        return "Player1"; //if paper vs rock paper wins
    }
    else if (strcmp(player2, "Rock") == 0 && strcmp(player1, "Scissors") == 0) {
        return "Player2"; //If rock vs scissors, rock wins
    }
    else if (strcmp(player2, "Scissors") == 0 && strcmp(player1, "Paper") == 0) {
        return "Player2"; //If scissors vs paper, scissors wins
    }
    else if (strcmp(player2, "Paper") == 0 && strcmp(player1, "Rock") == 0) {
        return "Player2";//if paper vs rock, paper wins
    }
    else if (strcmp(player1, player2) == 0) {
        return "Draw";
    }
    return "Invalid";
}

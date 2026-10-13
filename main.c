#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL)); // seed with current time

    int nr_of_players = 0;
    printf("Welcome to master YATZY! Let's play!\n");
    printf("Enter the number of players (2-6): ");
    if (scanf("%d", &nr_of_players) != 1) 
    {
        printf("OMG, how hard can it be to enter correct values?\n");
        return 1; 
    }

    if (nr_of_players < 2 || nr_of_players > 6) 
    {
        printf("we said 2 to 6 total players.\n");
        return 1;
    }

    printf("Perfect, we have %d number of players! Lets enter the names of all the players:\n", nr_of_players);

    char players[6][20] = {0};

    for(int player = 1; player <= nr_of_players; player++) 
    {
        printf("Enter player %d name: ", player);
        scanf("%19s", players[player]);
        printf("Add player %s\n", players[player]);
    }


    int score_board[6][15] = {0};

    // Initialize the score board with -1 to signal not used yet
    // if -1, score not used yet!
    for(int player = 0; player < 6; player++)
    {
        for(int score = 0; score < 15; score++)
        {
            score_board[player][score] = -1;
        }
    }


    return 0;
}
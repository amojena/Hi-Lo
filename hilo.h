#include <stdio.h>
#include <stdlib.h>

void welcomeUser(); //welcomes user and gives instructions

int setDifficulty(); //asks user for difficulty (# of lives)

int howManyNums(); //asks user how many #s he wants to play with

int* buildArray(int length); //builds array of ints

void playGame(int length, int* array, int lives); //starts the game

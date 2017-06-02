#include <stdio.h>
#include <stdlib.h>
#include "hilo.h"

void welcomeUser()//welcomes user and gives instructions
{
    return;
}

int setDifficulty() //asks user for difficulty (# of lives)
{
    int numLives;
    
    printf("\nHow many lives would you like to play with? (Max 3) ");
    scanf("%d", &numLives);
    
    while (numLives < 1 || numLives > 3)
    {
        printf("\nYou have entered an invalid number of lives. Please enter a number between 1-3 ");
        scanf("%d", &numLives);
    }
    
    return numLives;
}

int howManyNums() //asks user how many #s he wants to play with
{
    int length;
    printf("\nHow many numbers would you like to play with? (4-20) ");
    scanf("%d", &length);
    
    while (length < 4 || length > 20)
    {
        printf("You have entered an invalid number. Please enter a number between 4-20 ");
        scanf("%d", &length);
    }
    
    return length;
}
int* buildArray(int length) //builds array of ints
{
    int* array = malloc(sizeof(*array) * length + 1);
    
    for(int i = 0; i < length; i++)     array[i] = i + 1;
    
    return array;
}

void playGame(int* array, int lives); //starts the game



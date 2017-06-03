#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    int* array = malloc(sizeof(*array) * length + 1); //freed in main
    
    for(int i = 0; i < length; i++)     array[i] = i + 1;
    
    return array;
}

void playGame(int length, int* array, int lives) //starts the game
{
    int first = rand() % (length + 1);
    int second = rand() % (length + 1);
    int score = 0;
    char* temp = malloc(sizeof(char)  *  2); //will contain "hi/lo"
    char* guess = malloc(sizeof(char) *  2); //will contain user's guess of hi/lo
    
    
    if(first == 0) first ++;
    
    while(lives > 0)
    {
        if(second == 0) second ++;
        
        if (first >= second)     temp = "lo";
        if (first < second)   temp = "hi";
        
        printf("\nYou have %d lives!\n", lives);
        printf("The new number is %d. Will the next number be higher (hi) or lower (lo)? ", first);
        scanf("%s", guess);
        
        while(strcmp("hi", guess) != 0 && strcmp("lo", guess) != 0)
        {
            printf("\n\nYou have entered an invalid response. Please write \"hi\" if you think the next number will be higher or \"lo\" if you think the next number will be lower. ");
            scanf("%s", guess);
        }
        
        if(strcmp(temp, guess) == 0)
        {
            printf("\n\nGood job!");
            score++;
            printf("Your score is now: %d", score);
        }
        
        else
        {
            lives--;
            printf("Ouch! That's incorrect! The number was %d\n", second);
        }
        
        first = second;
        second = rand() % (length + 1);
        
    }//first while
    
}


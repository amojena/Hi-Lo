#include "hilo.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char ** argv)
{
    
    //Welcome user and explain rules
    
    
    //set difficulty function that returns an int
    int lives = setDifficulty();
    printf("You want %d lives\n", lives);
    
    
    //ask user how many numbers he/she would like to play with, returns an array of ints (calls building array function in it)
    int length = howManyNums();
    
    int* array = buildArray(length);
    
    for (int i = 0; i < length; i ++)
    {
            printf("%d ", array[i]);
    }
    printf("\n");
    
    //start game function passing as parameters the array and the number of lives
    
    
    return EXIT_SUCCESS;
}

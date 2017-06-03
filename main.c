#include "hilo.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char ** argv)
{
    
    //Welcome user and explain rules
    
    
    //set difficulty function that returns an int
    int lives = setDifficulty();
    printf("You want %d lives\n", lives);
    
    
    //ask user how many numbers he/she would like to play with
    int length = howManyNums();
    
    //makes an array of size length
    int* array = buildArray(length); //has to be freed after game is over
    
    //start game function passing as parameters the array and the number of lives
    playGame(length, array, lives);
    
    free(array);
    
    
    return EXIT_SUCCESS;
}

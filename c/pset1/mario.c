/******************************************************************
* pset1 - mario.c
*
* Write a program that recreates a half-pyramid using hashes (#) 
* for blocks. Prompt the user for the half-pyramid’s height, 
* a non-negative integer no greater than 23. If the user fails 
* to provide a non-negative integer no greater than 23, you 
* should re-prompt for the same again.
* 
* Height: 8
*        ##
*       ###
*      ####
*     #####
*    ######
*   #######
*  ########
* #########
* 
* Note that the rightmost two columns of blocks must be of the same height.
*
*******************************************************************/

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // get the height of the pyramid
    int height;
    printf("Please give me the half-pyramid's height: ");
    height = GetInt();
    
    // make sure the height is between 0 and 23, and reprompt if not
    while (height >=24 || height < 0)
    {
        printf("The half pyramid's height must be between 0 and 23 inclusive.\n");
        printf("So, try again. What is the half pyramid's height? ");
        height = GetInt();
    }
    
    //print out the pyramid
    for (int pyramid = 0; pyramid < height; pyramid++)
    {
        //spaces
        for (int space = 2; space <= height - pyramid; space++)
        {
            printf(" ");
        }
        
        //hashes
        for (int hashes = 0; hashes <= pyramid + 1; hashes++)
        {
            printf("#");
        }
        
        //new line
        printf("\n");
    }
    return 0;
}

// Assume that the only coins available are quarters (25¢), dimes (10¢)
// nickels (5¢), and pennies (1¢). Write a program that tells you
// the minimum amount of coins needed to produce the change owed.

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change = 0;
    // get the amount of change
    printf("OH HAI! Plz tell me how much change you need: ");
    change = GetFloat();
    
    // make sure the change is non-negative
    while (change <=0)
    {
        printf("The change to be given cannot be negative!\n");
        printf("Try again. How much change do you need? ");
        change = GetFloat();
    }
    
    // convert dollars to cents
    // round the float and make it an int
    int cents = round(change * 100);
   
    // set a variable for the coin count
    int i = 0;
    
    // how many quarters?
    while (cents >= 25)
    {
        i++;
        cents -= 25;   
    }
    
    // how many dimes?
    while (cents >= 10)
    {
        i++;
        cents -= 10;
    }

    // how many nickels?
    while (cents >= 5)
    {
        i++;
        cents -= 5;
    }
    
    // how many pennies?
    while (cents >= 1)
    {
        i++;
        cents -= 1;
    }
    
    // print out the answer
    printf("%d\n", i);  
}

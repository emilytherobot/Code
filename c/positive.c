#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        printf("I demand you give me a positive integer!");
        n = GetInt();
    }
        
    while (n <= 0);
    printf("Thanks! I like the number %i\n", n);
}

/*
 * Program to evaluate face values.
 * C Practice!
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char card_name[3]; // an array of chars, numbering 2 plus end
  int count = 0;
  while (card_name[0] != 'X') {
    puts("Enter the 2 digit card name, or type X to quit:\n");
    scanf("%2s", card_name);
    int val = 0;
    switch(card_name[0]) {
      case 'K':
      case 'Q':
      case 'J':
        val = 10;
        break;
      case 'A':
        val = 11;
        break;
      case 'X':
        continue;
      default:
        val = atoi(card_name);
        if (val < 1 || val > 10) {
          printf("MUST ENTER VALID CARD 1 TO 10 OR FACE, like Qu\n");
          continue;
        }
    }
    if ((val >2) && (val < 7)) {
      count++;
    } else if (val == 10) {
      count--;
    }
    printf("Current count: %i\n", count);
  }
  return 0;
}
// This program prompt the user to enter a value as input. If the value respects the condition, the program returns a pyramid.
#include <stdio.h>

int main(void)
{
  int n;
  do
  {
    // Prompt the user to enter a number
    printf("Height : ");
    scanf("%i", &n);

  // While the condition is not  met, we start the loop again
  }while(n > 8 || n < 1);

  // The first for loop return the # in height
  for(int i = 0; i < n; i++)
  {
    // The second loop return the blank case, it doesn't appear
    for(int j = n - 1; j > i; j--)
    {
      printf(" ");
    }

    // The third loop return the # in width and we have the let pyramid
    for(int k = 0; k <= i; k++)
    {
      printf("#");
    }

    // Make a space between both pyramid
    printf("  ");

    // The fourth loop return the right pyramid
    for(int l = 0; l < i + 1; l++)
    {
      printf("#");
    }

    // Then retur na new line
    printf("\n");
  }
}

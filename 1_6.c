#include <stdio.h>

/*

//check to see if (getchar() != EOF) is 1 or 0
void main()
{
  int c;

  while (c = (getchar() != EOF))
    putchar(c);
}

*/

int main()
{
  int c;
  return (c = (getchar() != EOF));
}


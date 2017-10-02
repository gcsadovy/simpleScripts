#include <stdio.h>

//determine whether an input integer is even or odd

void main()
{
  int ival, remainder;

  printf("Enter an Integer : ");
  scanf ("%d", &ival);
  if ((ival % 2) == 0)
    printf("%d is an even integer\n", ival);
  else
    printf("%d is an odd integer\n", ival);
}


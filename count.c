#include <stdio.h>

//count characters in inout; 1st ver

int main()
{
  long nc;

  nc = 0;
  while (getchar() != EOF)
    nc++;
  printf("Count: %ld\n", nc);
}

#include <stdio.h>

//second count with for and with double
int main()
{
  double nc;

  for (nc = 0; getchar() != EOF; nc++)
    ;
  printf("Count: %f\n", nc);
}

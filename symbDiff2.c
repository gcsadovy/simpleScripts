#include <stdio.h>
#include <ctype.h>

//symbolic Differentiator

int main(int argc, char *argv[])
{
  if (argc != 3)
    printf("Error symbDiff: needs a variable argument and an expression argument");
  while ((*argv + 2)[0] != '\0')
    printf("%d\n", (*argv)[0]);
  return 0;
}


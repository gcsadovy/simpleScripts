#include <stdio.h>

//write a program that prints out the numbers 1 to 100
//if divisible by 3, print "Crackle"
//if divisible by 5, print "Pop"
//if divisible by both 3 and 5, print "CracklePop"
//c lang

void main()
{
  int i;

  for (i=1; i <= 100; i++) {
    if (i % 3 == 0) {
      if (i % 5 == 0)
	printf("CracklePop\n");
      else
	printf("Crackle\n");
    }
    else if (i % 5 == 0)
      printf("Pop\n");
    else
      printf("%d\n", i);
  }
}

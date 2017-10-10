#include <stdio.h>
#include <ctype.h>

#define MAXLEN 1000 //max length of expression character string
//symbolic differentiator: derivates a function with respect to an abstract variable

int main(int argc, char *argv[])
{
  char c[MAXLEN];
  
  if (argc != 3)
    printf("symbDiff error: need a variable and a function as args");
  else {
    printf("variable = %s\n", (*++argv));
    printf("expression = %s\n", (*++argv));
    *c = (*argv);
    printf("%s", *c[0]);

    


    
  }
  return 0;
}


  

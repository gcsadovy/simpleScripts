#include <stdio.h>

//symbolic differentiator: find the differential of various function types and abstract input

//send 2 args as variable expression

int main(char var, char exp[])
{
  int scalar = 0;
  printf ("%s  %s", var, exp);

  for (; *exp != '\0'; *exp++) {
    if (*exp == " ")
      continue;
    else if (*exp >= '0' && *exp <= '9')
      scalar = scalar * 10 + (*exp - '0');
  }
  return scalar;
}




      
  

  

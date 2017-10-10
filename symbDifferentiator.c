#include <stdio.h>

//symbolic differentiator: find the differential of various function types and abstract input

//send 2 args as variable expression

int main(char *var, char *exp)
{
  int s = 0;
  

  for (; *exp != '\0'; *exp++) {
    if (*exp == " ") //skip blank spaces
      ;
    else if (*exp >= '0' && *exp <= '9') //if is digit
      s = s * 10 + (*exp - '0');
  }
  drv = s;

  return drv;
}


      
      
  

  

#include <stdio.h>

//symbolic differentiator: find the differential of various function types and abstract input

//send 2 args as variable expression

int main(char var, char exp[])
{
  int s = 0, drv, i;
  

  for (i = 0; exp[i] != '\0'; i++) {
    if (exp[i] == " ")
      continue;
    else if (exp[i] >= '0' && exp[i] <= '9')
      s = s * 10 + (exp[i] - '0');
  }
  drv = s;

  return drv;
}

      
      
  

  

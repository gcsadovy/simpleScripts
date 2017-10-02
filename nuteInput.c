#include <stdio.h>

//a program to read in all of the ppm values from a mix

#define  MAXPPM 1400

const char *IONL[] = { //initialize a listof each of the nute names
  "NO3",
  "P2O5",
  "K20",
  "S04",
  "Mg",
  "Ca",
  "Zn",
  "Mn",
  "Mo",
  "Cl",
  "Cu",
  "B",
  "Fe"
};

//declare a structure to hold relevant information for each of the nutes
struct key
{ 
  char *name;
  int *ppm;
};

//ask the user for the ppm of nutes, read in the ints, then print a tab
void main()
{
  int i, l, ival; //i is incrementor, ival is the input value
  struct key iontab;

  for (i = 0; (l = sizeof(IONL)) > i; i++) { 
    printf("Enter ppm %s:", IONL[i]);  //ask for nute
    if ((scanf("%d", &ival)) < MAXPPM) {
      iontab.name[i] = IONL[i];  //set name
      iontab.ppm[i] = ival;  //set ppm
      printf("Number Accepted");
    }
    else {
      printf("Error: Invalid Number");
      break;
    }
  }
  printf("Nutrient ppm table");
  for (i = 0; i < l; i++)
    printf("%d\t%d", iontab.name[i], iontab.ppm[i]); //print a table
}


    


  
  

  

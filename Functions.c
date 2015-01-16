#include<stdlib.h>
#include<stdio.h>
#include"fileOperation.h"

void
toScreen(char *fileName)
{
  //variables
  FILE *f;
  char input;
  char *mode;
  //operations
  mode = "r";
  f = fopen(fileName,mode);
  if(f == NULL)
  {
    printf("File does not exist\n");
    return;
  }
  else
  {
    for(;;)
    {
      fscanf(f, "%c", &input);
      if(input == '\0') return;
      else printf("%c", input);
    }
  }
}

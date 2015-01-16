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
  f = fopen(fileName, mode);
  if(f == NULL)
  {
    printf("File does not exist\n");
    return;
  }
  else
  {
    while(fscanf(f, "%c", &input) != EOF)
      printf("%c", input);
  }
}

void
toFile(char *fileName)
{
  //variables
  FILE *fin, *fout;
  char input;
  char *modein, *modeout;
  //operations
  modein = "r";
  modeout = "w";
  fin = fopen(fileName, modein);
  fout = fopen("outfile.txt", modeout);
  if(fin == NULL)
  {
    printf("File does not exist\n");
    return;
  }
  else
  {
    while(fscanf(fin, "%c", &input) != EOF)
      fprintf(fout, "%c", input);
  }
}

int
wordCount(char *fileName)
{
  //variables
  FILE *fin;
  int count, isWord;
  char *mode;
  //ops
  

#include <stdio.h>
#include <string.h>

int readCode(char code[127][8])
{
  char temp[3];
  FILE *fp;
  int i;

  for(i=0; i<128; i++)
    strcpy(code[i], "") ;


  fp = fopen("morsecode.txt", "r");
  if(!fp) { printf("Something went wrong\n"); return 1;}

  while(fscanf(fp, "%s", temp) == 1)
    fscanf(fp, "%s", code[temp[0]]);
    fclose(fp);

  for(i=97; i<123; i++)
    strcpy(code[i], code[i-32]);

  return 0;
}

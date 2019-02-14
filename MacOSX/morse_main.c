#include <stdio.h>
#include <string.h>
#include "morse.c"

void writeCode(char *text, char code[127][8])
{
  int len, i;

  printf("%s\n", text);
  len = (int)strlen(text);
  for(i=0; i<len; i++)
    if(text[i] >= 32 && text[i] <= 127)
      printf("%s ", code[text[i]]);
  printf("\n");
}

int main()
{
  char code[0][20];
  char inputUser[127][8];
  if(readCode(code) == 1)
    return 1;

  printf("Type in your Word/ Sentence: ");
  fgets(inputUser, 127, stdin);
  writeCode(inputUser, code);
  return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line)
{
  char *s1 = line;
  char ** arr = malloc(10);
  int counter = 0;

  while (s1)
  {
    arr[counter] = malloc(256);
    char * s = strsep(&s1, " ");
    strcpy(arr[counter], s);
    counter++;
  }

  arr[counter] = malloc(256);
  arr[counter] = NULL;

  return arr;
}

int main()
{
  char ln[100] = "ls -a -l";
  char ** parsed = parse_args(ln);
  execvp(parsed[0], parsed);
}

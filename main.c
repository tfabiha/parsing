#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line)
{
  /*
  Use the following header: char ** parse_args( char * line );
It should take a string with the command line invocation of a program (like "ls -a -l")
    Note that there is a " " between each argument
Return an array of pointers to each individual argument in the parameter string, that could be used for execvp()
For example, the following code should work (assuming all variables are declared appropriately:
    char ** args = parse_args( line );
    execvp(args[0], args);
You can make the following assumptions:
    There is only 1 space between each argument in the original string
    The original string contains no more than 5 arguments
    The original string is correctly formatted
  */



}

int main()
{
  //char ln[] = "ls -a -l"
  //char ** parsed = parse_args(ln)
  //execvp(parsed[0], parsed)
}

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "readLine.h"
#include "execCmds.h"
#include "encryptLine.h"
#include "decryptLine.h"
#include "sort.h"
#include "sortLen.h"
#include "reverse.h"
#include "person5.h"


// print the elements in the array, up to (but not including) the first
// NULL entry
void printLines(char** a) {
  int i;
  for (i = 0; a[i] != NULL; i++) {
    printf("%s\n", a[i]);
  }
}


//-u
void low2Upper(char**p)
{
  int i=0;
  while(p[i]!=NULL)
    {
      int j=0;
      while(p[i][j]!='\0')
	{
	  if(p[i][j]>93)
	    {
	    p[i][j]=p[i][j]-32;
	    }
	  j++;
	}
      i++;
    }
}
      
//-rr

void reverse(char**p)
{
  int line = 0;
  while(p[line] != NULL)
    {
      int end = strlen(p[line]) - 1;
      int start = 0;
      while(start < end)
	{
	  char temp;
	  temp = p[line][end];
	  p[line][end] = p[line][start];
	  p[line][start] = temp;
	  
	  start++;
	  end--;
	}
      line++;
    }
}


//reverse the lines in the array
void reverseArray(char** arr);



// our array that tells how command-strings map to functions
commandMap map[] = {
  {"-p", printLines},
  {"-e", encryptLines},
    {"-d", decryptLines},
  {"-s", sort},
  {"-l", sortLen},
  {"-r",reverseArray},
  {"-h", html},
  {NULL, NULL},
};


// main function
int main(int argc, char* argv[]) {
  // read lines from standard input
  char** lines = readLines();

  // execute each command on the command line
  executeCommands(lines, map, argv+1);

  // exit with "success"
  return EXIT_SUCCESS;
}

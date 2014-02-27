#include <string.h>
#include "sortLen.h"

// Implements the sort function, which performs selection sort 
// on an array of char*

// Function: sort (using selection sort algorithm)
//
// parameters:
//  - arr: an array of strings to be sorted
//  - length: the length of the array
void sortLen(char * arr[]) 
{
  // index variables
  int i =0;
  int j = 0;
  int length = 0;

  while (arr[i] != '\0'){
    i++;
    length++;
  }

  // outer loop: iteratively finds the next-smallest element and
  // puts it into the proper place

  for (i = 0; i < length; i++) 
  {
    // inner loop: find the smallest element in the array from i to the end
    int smallIdx = i; // index of smallest element found so far
    for (j = i+1; j < length; j++) 
    {
      if (strlen(arr[j]) < strlen(arr[i]))
      {
	smallIdx = j;	  
      }
      
       char* temp1 = arr[smallIdx];
       arr[smallIdx] = arr[i];
       arr[i] = temp1;
       smallIdx = i;

	//if string length is the same, then sort alphabetically
       if (strlen(arr[j]) == strlen(arr[smallIdx])) {

	 //compare strings alphabetically
	 if (strcmp(arr[j], arr[smallIdx]) > 0) {
	   // found "smaller" string: update index
	   smallIdx = j;
	 }
	// found "smaller" string: update index
	char *temp = arr[smallIdx];
	arr[smallIdx] = arr[i];
	arr[i] = temp;
      }
    }
    // swap element currently at i with smallest element found
  }
}

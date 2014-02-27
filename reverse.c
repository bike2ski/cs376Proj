#include "reverse.h"

//reverse the lines in the array
void reverseArray(char** arr)
{
  int j = 0;
  int i = 0;
  while(arr[i] != NULL)
    {
      ++i;
    }
  char* temp;
  for (i, i--; i > j ; --i, ++j)
    {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
}

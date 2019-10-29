// ***
// *** You MUST modify this file
// ***

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <string.h> 

#ifdef TEST_ELIMINATE
// 100% of the score
void eliminate(int n, int k)
{
  // allocate an arry of n elements
  int * arr = malloc(sizeof(* arr) * n);
  // check whether memory allocation succeeds.
  // if allocation fails, stop
  if (arr == NULL)
    {
      fprintf(stderr, "malloc fail\n");
      return;
    }
  // initialize all elements
  for (int i = 0; i < n; i++)
      arr[i] = 1;
  
  // counting to k,
  // mark the eliminated element
  // print the index of the marked element
  // repeat until only one element is unmarked
  int index = n - 1;
  int count = k;
  int mark = n;
  while (mark) {
      while (count) {
          do {
              if (index == n - 1) 
                  index = 0;
              else                
                  index++;
          } while (!arr[index]);
          count--;
      }
      printf("%d\n", index);
      arr[index] = 0;
      count = k;
      mark--;
  }

  // release the memory of the array
  free (arr);
}
#endif

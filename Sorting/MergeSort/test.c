#include <stdio.h>
#include "sort.h"

void print_array(int b[], size_t size)
{
  for(int i = 0; i< size; i++)
    printf("%d, ", b[i]);
  printf("\n");
}

int main(void)
{
  int b[]= {1, 5, 2, 3, 7, 8, 9};
  int size = sizeof(b)/ sizeof(int);

  mergesort(b, size);
  print_array(b,size);

  return 0;
}

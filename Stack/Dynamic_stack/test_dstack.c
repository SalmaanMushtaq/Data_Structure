#include <stdio.h>
#include <assert.h>
#include "dynamic_stack.h"

int main(void){
  int size = 5;
  StackEntry a[] = {5, 6, 7, 8, 9};
  
  Stack *stack =  stack_create(size);
  assert(!stack_is_full(stack)); 
  for(int i = 0; i < 5; i++)
    stack_push(stack, a[i]); 


  assert(stack_is_full(stack));
  
  StackEntry tos;
  assert(stack_top(stack, &tos) == 0);
  printf("Top of stack = %d\n", tos);
  

  assert(!stack_is_empty(stack));
  while (!stack_is_empty(stack)){
    int poped_item;
    stack_pop(stack, &poped_item);
    printf("Poped item %d\n", poped_item);
  }

  assert(stack_is_empty(stack));
  assert(stack_pop(stack, &tos) != 0);
  return 0;
}

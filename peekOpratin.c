#include <stdio.h>
#include <stdlib.h>

struct stack {
  int size;
  int top;
  int *arr;
};
// --> that is alredy use in previous code which is opration in stack
int isEmpty(struct stack *ptr) {
  if (ptr->top == -1) {
    return 1;
  } else {
    return 0;
  }
}

int isFull(struct stack *ptr) {
  if (ptr->top == ptr->size - 1) {
    return 1;
  } else {
    return 0;
  }
}
void push(struct stack *ptr, int val) {
  if (isFull(ptr)) {
    printf("Stack Overflow! Cannot push %d to the stack\n", val);
  } else {
    ptr->top++;
    ptr->arr[ptr->top] = val;
  }
}
int pop(struct stack *ptr) {
  if (isEmpty(ptr)) {
    printf("Stack Underflow! Cannot pop from the stack\n");
    return -1;
  } else {
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
  }
}
int peek(struct stack *sp, int i) {
  int arrInd = sp->top - i + 1;
  if (arrInd < 0) {
    printf("Not a valid position for the stack\n");
    return -1;

  } else {
    return sp->arr[arrInd];
  }
}
int main() {
  struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
  sp->size = 10;
  sp->top = -1;
  sp->arr = (int *)malloc(sp->size * sizeof(int));
  printf("Stack has been created successfully\n");

  printf("Before pushing, Full: %d\n", isFull(sp));
  printf("Before pushing, Empty: %d\n", isEmpty(sp));
   push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);
    push(sp, 46);
    push(sp, 89);
    push(sp, 6);  
    push(sp, 5);  
    push(sp, 75);  
  for (int j = 1; j <= sp->top + 1; j++) {

    printf("the value at position %d is %d\n", j, peek(sp,j));
  }

  return 0;
}
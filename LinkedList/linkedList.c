#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};
void linkedlistTraversal(struct Node *ptr) {
  while (ptr != NULL) {

    printf("Element:%d\n", ptr->data);
    ptr = ptr->next;
  }
}

int main() {
  struct Node *head;
  struct Node *second;
  struct Node *third;

  // Allowcat memory for nodes in the linked list in heap
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  // link first and seond node
  head->data = 7;
  head->next = second;

  // link second and third
  second->data = 9;
  second->next = third;

  // link third and Null at all
  third->data = 89;
  third->next = NULL;

  linkedlistTraversal(head);
  return 0;
}
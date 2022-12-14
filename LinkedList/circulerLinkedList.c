#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};
void linkListTraversal(struct Node *head) {
  struct Node *ptr = head;
  // printf("Element is %d\n",ptr->data);
  //   ptr = ptr->next;
  do {
    printf("Element is %d\n", ptr->data);
    ptr = ptr->next;
  } while (ptr != head);
}
struct Node *insertAtFirst(struct Node *head, int data) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  struct Node *p = head->next;
  while (p->next != head) {
    p = p->next;
  }
  // At this point p to the last of this circular linked list
  p->next = ptr;
  ptr->next = head;
  head = ptr;
  return head;
  // struct Node*p= head ->next;
}

int main() {
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *forth;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  forth = (struct Node *)malloc(sizeof(struct Node));

  head->data = 4;
  head->next = second;

  second->data = 7;
  second->next = third;

  third->data = 8;
  third->next = forth;

  forth->data = 77;
  forth->next = head;

  insertAtFirst(head, 55);
  linkListTraversal(head);
  

  return 0;
}
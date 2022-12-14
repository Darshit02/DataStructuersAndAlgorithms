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
// case 1 : Delete first
struct Node *deleteFirst(struct Node *head) {
  struct Node *ptr = head;
  head = head->next;
  free(ptr);
  return head;
}
// case 2 : Delete At the index
struct Node *deleteAtIndex(struct Node *head, int index) {
  struct Node *p = head;
  struct Node *q = head->next;
  for (int i = 0; i < index - 1; i++) {
    p = p->next;
    q = q->next;
  }
  p->next = q->next;
  free(q);
  return head;
}
// case : 3 delete at the last
struct Node *deleteTheLastNode(struct Node *head) {
  struct Node *p = head;
  struct Node *q = head->next;
  while (q->next != NULL) {
    p = p->next;
    q = q->next;
  }
  p->next = NULL;
  free(q);
  return head;
}
// case 4 Delete at the given node
struct Node *deleteGivVal(struct Node *head, int val) {
  struct Node *p = head;
  struct Node *q = head->next;
  while (q->data != val && q->next != NULL) {
    p = p->next;
    q = q->next;
  }
  if (q->data == val) {
    p->next = q->next;
    free(q);
    printf("deletion value is %d \n",val);
  }
  return head;
}

int main() {
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *forth;

  // Allowcat memory for nodes in the linked list in heap
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  forth = (struct Node *)malloc(sizeof(struct Node));

  // link first and seond node
  head->data = 7;
  head->next = second;

  // link second and third
  second->data = 9;
  second->next = third;

  // link third and forth at all
  third->data = 89;
  third->next = forth;

  // link to null the fourth
  forth->data = 55;
  forth->next = NULL;

  printf("Linked lidt before deletion\n");
  linkedlistTraversal(head);

  // head = deleteFirst(head);  //for deleting element
  // head = deleteAtIndex(head, 2); //Delete at given index
  // head = deleteTheLastNode(head); // Delete the last node
  //head = deleteGivVal(head, 7); // Deletion at given val
  // head = deleteTheLastNode(head);
  printf("Linked list after deletion\n");
  linkedlistTraversal(head);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};
void linkedListTraversal(struct Node *ptr) {
  while (ptr != NULL) {
    printf("%d\n", ptr->data);
    ptr = ptr->next;
  }
}
// case:1
struct Node *insertAtFirst(struct Node *head, int data) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  ptr->next = head;
  return ptr;
}
// case:2
struct Node *insertAtIndex(struct Node *head, int data, int index) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  struct Node *p = head;
  int i = 0;

  while (i != index - 1) {
    p = p->next;
    i++;
  }
  ptr->data = data;
  ptr->next = p->next;
  p->next = ptr;
  return head;
}
// case:3
struct Node *insertAtEnd(struct Node *head, int data) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  struct Node *p = head;
  while (p->next != NULL) {
    p = p->next;
  }
  p->next = ptr;
  ptr->next = NULL;
  return head;
}
// case:4
struct Node *insertAfterNode(struct Node *head, struct Node *pevNode,
                             int data) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  ptr->next = pevNode->next;
  pevNode->next = ptr;

  return head;
}
int main() {
  struct Node *head;
  struct Node *second;
  struct Node *third;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  head->data = 7;
  head->next = second;

  second->data = 9;
  second->next = third;

  third->data = 66;
  third->next = NULL;

  // linkedListTraversal(head);
  // case 1:
  // head = insertAtFirst(head, 55);

  // case 2:
  // head =insertAtIndex(head, 55, 1);

  // case 3:
  // head =insertAtEnd(head, 333);

  // case 4:
  // head = insertAfterNode(head, second, 77);

  linkedListTraversal(head);

  return 0;
}
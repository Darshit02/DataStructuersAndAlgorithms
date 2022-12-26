#include <stdio.h>
#include <stdlib.h>
#define COUNT 10

struct node {
  int data;
  struct node *left;
  struct node *right;
};
struct node *createNode(int data) {
  struct node *n;                                 // Crating A Node Pointer
  n = (struct node *)malloc(sizeof(struct node)); // Allowcating Memory in heap
  n->data = data;
  // Setting the left And right child NULL
  n->left = NULL;
  n->right = NULL;
  return n;
}
int main() {
  /*
  // Constructing the roote Node
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  p->data = 1;
  p->left = NULL;
  p->right = NULL;

  // Constructing the second Node
  struct node *p1;
  p1 = (struct node *)malloc(sizeof(struct node));
  p->data = 2;
  p1->left = NULL;
  p1->right = NULL;

  // Constructing the third Node
  struct node *p2;
  p2 = (struct node *)malloc(sizeof(struct node));
  p->data = 4;
  p2->left = NULL;
  p2->right = NULL;

  // Linking the root Node
  p->left = p1;
  p->right = p2;
  */
  struct node *p = createNode(2);
  struct node *p1 = createNode(1);
  struct node *p2 = createNode(4);

  // Linking the Root node with left and right children
  p->left = p1;
  p->right = p2;
  // printf(p());
  return 0;
}
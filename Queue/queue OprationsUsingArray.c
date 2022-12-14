#include <stdio.h>
#include <stdlib.h>

struct queue {
  int size;
  int f;
  int r;
  int *arr;
};

int isFull(struct queue *q) {
  if (q->r == q->size - 1) {
    return 1;
  }
  return 0;
}
int isEmpty(struct queue *q) {
  if (q->r == q->f) {
    return 1;
  }
  return 0;
}
void enqueue(struct queue *q, int val) {
  if (isFull(q)) {
    printf("This Queue is full\n");
  } else {
    q->r++;
    q->arr[q->r] = val;
    printf("Enqued element: %d\n", val);
  }
}
int dequeue(struct queue *q) {
  int a = -1;
  if (isEmpty(q)) {
    printf("This Queue is Empty\n");
  } else {
    q->f++;
    a = q->arr[q->f];
    printf("dequed element:\n");
  }
  return a;
}

int main() {
  struct queue q;
  q.size = 100;
  q.f = -1;
  q.r = -1;
  q.arr = (int *)malloc(q.size * sizeof(int));

  // Enqueue few Elements

  enqueue(&q, 12);
  enqueue(&q, 15);

  // And Dequeuing Element
  printf("Dequeuing element %d\n", dequeue(&q));
  printf("Dequeuing element %d\n", dequeue(&q));
  printf("Dequeuing element %d\n", dequeue(&q));
  // Check the Queue is Empty or Not

  // if (isEmpty(&q)) {
  //   printf("Queue is Empty");
  // }

  // Check the Queue is Full or Not

  // if (isFull(&q)) {
  //   printf("Queue is Full");
  // }

  return 0;
}
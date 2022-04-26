#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  struct node
  {
      int data;
      struct node *next;
  };

  struct node *head,*pt1,*pt2,*pt3,*last;

  head = malloc(sizeof(struct node));
  pt1 = malloc(sizeof(struct node));
  pt2 = malloc(sizeof(struct node));
  pt3 = malloc(sizeof(struct node));
  last = malloc(sizeof(struct node));

  head->data = 1;
  pt1->data = 2;
  pt2->data = 3;
  pt3->data = 4;
  last->data = 5;

  head->next = pt1;
  pt1->next = pt2;
  pt2->next = pt3;
  pt3->next = last;
  last->next = NULL;

  struct node *temp = head;

  printf("the list:\n");
  while(temp != NULL)
  {
      printf("%d->",temp->data);
      temp = temp->next;
  }
  printf("NULL");

  return 0;
}

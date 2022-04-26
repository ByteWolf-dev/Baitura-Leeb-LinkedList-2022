#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
  struct node
  {
      int data;
      struct node *next;
  };

  int count = 1;

  struct node *head,*pt1,*pt2,*pt3,*last;

  head = malloc(sizeof(struct node));
  pt1 = malloc(sizeof(struct node));
  pt2 = malloc(sizeof(struct node));
  pt3 = malloc(sizeof(struct node));
  last = malloc(sizeof(struct node));

  head->data = 1101100;
  pt1->data = 1101001;
  pt2->data = 1110011;
  pt3->data = 1110100;
  last->data = 1110011;

  head->next = pt1;
  pt1->next = pt2;
  pt2->next = pt3;
  pt3->next = last;
  last->next = NULL;

  struct node *temp = head;

  printf("The List:\n");
  while(temp != NULL)
  {
      printf("node:%d, data: 0%d;\n", count, temp->data);
      temp = temp->next;
      count++;
  }

  return 0;
}

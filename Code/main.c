#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head,*pt1,*pt2,*pt3,*last;

void add(struct node *newLast, struct node *head){
    struct node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newLast;
}

void delete(int index){
    struct node *temp = head;
    struct node *connection;
    for(int i = 0; i < index - 1; i++){
        temp = temp->next;
    }
    connection = temp->next;
    temp = connection->next;

}

int main() {
  int count = 1;

  head = malloc(sizeof(struct node));
  pt1 = malloc(sizeof(struct node));
  pt2 = malloc(sizeof(struct node));
  pt3 = malloc(sizeof(struct node));
  last = malloc(sizeof(struct node));

  head->data = 395239;
  pt1->data = 400471;
  pt2->data = 399324;
  pt3->data = 398999;
  last->data = 397627;

  head->next = pt1;
  pt1->next = pt2;
  pt2->next = pt3;
  pt3->next = last;
  last->next = NULL;

  struct node *newTestNode;
  newTestNode->data = 177013;
  newTestNode->next = NULL;
  add(newTestNode, head);

  delete(2);
  struct node *temp = head;

  printf("The List:\n");
  printf("node:%d, data: %d;\n |\n", count, temp->data);
  while(temp != NULL)
  {
      count++;
      temp = temp->next;
      for(int i = 1; i < count; i++){
          printf(" ");
      }
      printf("-> node:%d, data: %d;\n", count, temp->data);
      if(temp->next != NULL) {
          for(int i = 0; i < count; i++){
              printf(" ");
          }
          printf("|\n");
      } else break;
  }
  return 0;
}

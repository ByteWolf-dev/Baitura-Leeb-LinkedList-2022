#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head,*pt1,*pt2,*pt3,*last;

struct node* createNode(int data){
    struct node *newNode;
    newNode = malloc(sizeof (struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void add(struct node *newLast){
    struct node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newLast;
}

void deleteLastElement(){
    struct node *t;
    t = head;
    while(t->next->next != NULL){
        t = t->next;
    }
    t->next = NULL;
    free(t->next);
}

void deleteAtIndex(int index){
    index--;
    struct node *temp = head;
    for(int i = 0; i < index - 1; i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

void insertAtIndex(int index, int data){
    index--;
    struct  node *temp = head;
    struct node *conn;
    for(int i = 0; i < index; i++){
        temp = temp->next;
    }
    conn = temp->next;
    temp->next = createNode(data);
    temp->next->next = conn;
}

void displayList(){
    struct node *temp = head;

    int count = 1;
    printf("The List:\n\n");
    printf(" node:%d, data: %d;\n |\n", count, temp->data);

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
}

int main() {

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

  struct node *newTestNode = createNode(177013);
  add(newTestNode);

  deleteAtIndex(3);
  insertAtIndex(4, 399324);

  add(createNode(12345));
  deleteLastElement();

  displayList();

  return 0;
}

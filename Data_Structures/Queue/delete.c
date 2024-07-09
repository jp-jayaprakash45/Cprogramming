#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *prev;
  struct node *next;
};

struct node *create_stack(int n) {
  struct node *n1 = (struct node *)malloc(1 * sizeof(struct node));
  if (n1 == NULL) {
    return NULL;
  }
  n1->data = n;
  n1->prev = NULL;
  n1->next = NULL;


  return n1;
}

int main(int argc, char *argv[]) {
  struct node *head = NULL;
  struct node *new_node = NULL;
  struct node *temp = NULL;
  struct node *delete = NULL;
  struct node *tail = NULL;


  int input,remove;
  int i = 0;
  int n = 5;
  while (i < n) {
    printf("Enter input for node %d :",i+1);
    scanf("%d",&input);
    new_node = create_stack(input);
    if (head == NULL) {
      head = new_node ;
    } else {
          temp = head;
                while (temp->next != NULL) {
                          temp = temp->next;
                         }
                   temp->next = new_node ;
                   new_node -> prev = temp;
       }         
     
  i++;
}
  tail = new_node;


  printf("output after creation of stack :\n");           
  temp = head;
  while (temp != NULL) {
    printf("%d ->", temp->data);
    temp = temp->next;
  }
  printf("\n");
  printf("Nodes to be deleted from 1 to 5 :");
  scanf("%d",&remove);

  i=0;
  while(i<remove){
          temp = tail->prev;
          delete = tail;
          tail = temp;
          delete->prev = NULL;
          tail->next = NULL;
          free(delete);
     i++;
}   
   printf("After deleting :\n");
    temp = head;
    while (temp != NULL) {
      printf("%d ->", temp->data);
      temp = temp->next;
    }
    printf("\n");

  return EXIT_SUCCESS;
}

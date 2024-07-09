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

  int i = 0;
  int n = 10;
  while (i < n) {
    new_node = create_stack(i);
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
            

 
 
  temp = head;
  while (temp != NULL) {
    printf("%d ->", temp->data);
    temp = temp->next;
  }
printf("\n");

  return EXIT_SUCCESS;
}

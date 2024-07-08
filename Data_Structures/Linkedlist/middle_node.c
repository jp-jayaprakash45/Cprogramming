#include <stdio.h>
#include <stdlib.h>          // printing middle node using count

struct node {
  int data;
  struct node *prev;
  struct node *next;
};

struct node *create_node(int n) {
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
  struct node *tail = NULL;


  int i = 0;
  int n = 10;
  int count = 0;
  while (i < n) {
    new_node = create_node(i);
    count++;
    if (head == NULL) {
      head = new_node ;
    } else {
      struct node *temp = head;
      while (temp->next != NULL) {
        temp = temp->next;
      }
      temp->next = new_node ;
      new_node -> prev = temp;
    
    }
     
    i++;
  } 
  temp = head;
  i=0; 
  while(i<count/2){
          
            temp = temp->next;
            
            i++;
  }
  printf("middle node - %d\n",temp->data);  

         
  return EXIT_SUCCESS;
}

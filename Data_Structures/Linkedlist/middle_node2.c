#include <stdio.h>
#include <stdlib.h>          

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
  struct node *jump1 = NULL;
  struct node *jump2 = NULL;



  int i = 0;
  int n = 10;
  while (i < n) {
    new_node = create_node(i);
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
  jump1 = head;
  jump2 = head;
 
  while(jump2 != NULL){
            
            jump1 = jump1->next;
 
            jump2 = jump2->next->next;
           
          
  }
   printf("middle node - %d\n",jump1->data);

         
  return EXIT_SUCCESS;
}

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
  struct node *t = NULL;
  struct node *tail = NULL;
  struct node *temp = NULL;

  int number,new_data,position;
  int i = 0;
  int n = 10;
  while (i < n) {
    new_node = create_node(i);
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
   tail = temp->next ;

    printf("Enter 1 to add node at beginning\n");
    printf("Enter 2 to add node at middle\n");
    printf("Enter 3 to add node at end\n");
    scanf("%d",&number);

    printf("Enter new data to add ....\n");
    scanf("%d",&new_data);

   switch(number){

     case 1 :                                                   // starting

             new_node = create_node(new_data);
             head -> prev = new_node;
             new_node->next = head;
             head = new_node;
             break;
 
    case 2  :
                                                                 // middle node
             printf("Enter node position to be added\n");
             scanf("%d",&position);
             new_node = create_node(new_data);
             i=0;
             t = head;
             temp = head;
             while(i<position-1){
                  t = temp;
                  temp = temp->next;
              i++;
            }
            t->next = new_node;
            new_node -> next = temp;
            temp->prev = new_node;
            new_node->prev = t;
            break;
 
    case 3 :
                                                                 // end node
             new_node = create_node(new_data);
             tail->next = new_node;
             new_node->prev = tail;
             tail = new_node;                                    
           break;
    default :
          printf("invalid number....Enter number between 1 - 3"); 
}

 
 
  t = head;
  while (t != NULL) {
    printf("%d ->", t->data);
    t = t->next;
  }
   printf("\n\n");
     while(tail != NULL){
          printf("%d <- ",tail->data);
          tail = tail->prev;
}
   printf("\n");

  return EXIT_SUCCESS;
}

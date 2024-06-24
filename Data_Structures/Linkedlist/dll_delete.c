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
  struct node *t1 = NULL;


  int number, position;
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

    printf("Enter 1 to delete node at beginning\n");
    printf("Enter 2 to delete node at middle\n");
    printf("Enter 3 to delete node at end\n");
    scanf("%d",&number);

   switch(number){

     case 1 :                                                   // starting

            temp = head;
            head = temp->next;
            head->prev = NULL;
            free(temp);
             break;
 
    case 2  :
                                                                 // middle node
             
            printf("Enter node to be deleted\n");
            scanf("%d",&position);
            i=0;
            temp = head;
            t    = head;  
            while(i<position-1){
                  t = temp;
                  temp = temp->next;
                  
              i++; 
              } 
              t1= temp->next;
              t->next = t1;
              t1->prev = t;
              temp = NULL;
              free(temp);
              break;
 
    case 3 :
                                                                 // end node
            t = tail;
            tail = temp;
            tail->next = NULL;
            t->prev = NULL;
            free(t);                                      
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

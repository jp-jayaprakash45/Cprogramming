#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node {
  int id;
  char name[64];
 int class;
 char gender;
  
  struct node *link;
};

struct node *create_node(int n) {
  struct node *n1 = (struct node *)malloc(1 * sizeof(struct node));
  if (n1 == NULL) {
    return NULL;
  }
  n1->link = NULL;

  return n1;

}


int main(int argc, char *argv[]) {
  struct node *head = NULL;
  struct node *t = NULL;


  int number,givenid;
  printf("Enter 1- Add,2-Delete,3-print\n");
  scanf("%d",&number);

              int i = 0;
              int n=3;

                while (i < n) {
                    t = create_node(i);
                   printf("enter student details id,name,class,gender\n");
                    scanf(" %d %s %d %c",&t->id,t->name,&t->class,&t->gender);
                   if (head == NULL) {
                    head = t;
                  } else {
                  struct node *temp = head;
                 while (temp->link != NULL) {
                   temp = temp->link;
                 }
               temp->link = t;
                }
                i++;
             }

struct node *tem = NULL;
struct node *temp = NULL;

int idnumber;
  switch (number){
    
    
     case 1 :        
                  t = create_node(i);
                  printf("enter student details id,name,class,gender\n");
                  scanf(" %d %s %d %c",&t->id,t->name,&t->class,&t->gender);
                 if (head == NULL) {
                   head = t;
                } else {
                struct node *temp = head;
               while (temp->link != NULL) {
                 temp = temp->link;
               }
              temp->link = t;
              }
              
      
            break;
    case 2 :
         
              temp = head;
              t = head;
             printf("Enter ID number to be deleted\n");
             scanf("%d",&idnumber);
                while(temp != NULL){
                           if( temp!=NULL && head->id == idnumber && temp->link !=NULL){
                                temp = head;
                                head = head->link; // deleting 1st node
                                free(temp);
                               break; 
                             }  
                           if(temp!=NULL && temp->id == idnumber && temp->link !=NULL){
                               //  temp = temp->link;         // deleting middle node
                                t->link = temp->link;
                               free(temp);
                               break;
                               
                            }
                              if(temp ->link == NULL && temp != NULL){
                                  t->link = NULL; 
                                   free(temp);    // deleting last node
                                 break;
                                 }
                    t=temp;
                    temp = temp->link;
                     }
                    printf("After deleting.....\n");
                        t = head;
                     while (t != NULL) {
                               printf("Id -%d Name-%s Class-%d Gender-%c\n",t->id,t->name,t->class,t->gender);

                                  t = t->link;
                               } 
           break;
    case 3 :
       
          tem = head;

          printf("Enter id to print\n");
          scanf(" %d",&givenid);
                   while(tem!=NULL && tem->id != givenid && tem->link !=NULL){
                        tem = tem->link;
                 }
                 printf("Id -%d Name-%s Class-%d Gender-%c\n",tem->id,tem->name,tem->class,tem->gender);             
                 break;
             
     default : 
            printf("Enter valid number\n");            
}
  return EXIT_SUCCESS;
}

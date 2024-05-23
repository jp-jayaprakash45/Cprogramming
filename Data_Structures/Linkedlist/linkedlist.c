#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

int main(int argc, char *argv[]) {
  struct node *head = NULL;
  struct node *t = NULL;
  int n;
  printf("Enter number of nodes :");
  scanf("%d",&n);

    for(int i =0;i<n;i++){
        
         struct node *n1 = (struct node *)malloc(1 * sizeof(struct node));
         printf("Enter node %d data :",i+1);
         scanf("%d",&n1->data);
         n1->link = NULL;

                if(i == 0){
                    head = n1;
                    t = head;
                }
     
       t->link = n1;
       t = n1;
       
    }

  t = head;
  while (t != NULL) {
    printf("%d ->", t->data);
    t = t->link;
  }
  printf("\n");
  return EXIT_SUCCESS;
}

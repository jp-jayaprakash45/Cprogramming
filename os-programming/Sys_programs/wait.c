#include<stdio.h>
 #include <sys/types.h>
#include <sys/wait.h>
 #include <unistd.h>

int main(){
   int pid;

 pid = fork();
   
   if(pid < 0){
         printf("process creation is not successfull....");
          return -1;
}
   else if(pid ==0){
          printf("It's a child process\n");
          int a,b;
          scanf("%d %d",&a,&b);
          printf("sum of a + b = %d\n",a+b);
             return 0;
          }
     else{
            printf("It's a parent process\n");
            int a,b;
            scanf("%d %d",&a,&b);
           printf("multiply of a * b = %d\n",a*b);
               int status;
                 wait(&status);
            return 0;
            }
return 0;
}

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main() {
int pid = fork();
  char buf[100] = "";   // 2 processes are independent so that we can't access data ...for this we need to use pipes
  char another_buf[100];
   if(pid == 0){
     
         read(0, buf, 100);
     }

   else{
         int status;
         wait(&status);

         write(1, another_buf, sizeof(buf));
         printf("After reading......[%s]",another_buf);
        }
  return 0;
}

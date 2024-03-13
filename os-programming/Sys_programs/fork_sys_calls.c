#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main() {
int pid = fork();
  char buf[100] = "";
  if (read(0, buf, 100) < 0) {
    perror("read");
    return -1;
  }

  if (write(1, buf, sizeof(buf)) < 0) {
    perror("write");
    return -1;
  }
   if(pid == 0){
     
         read(0, buf, 100);
     }

   else{
         int status;
         wait(&status);

         write(1, buf, sizeof(buf));
        }
  return 0;
}

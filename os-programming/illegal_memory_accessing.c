#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

void sighandler()
{
         printf("I am still alive\n");
         exit(0);
}

int main()
{

//      signal(SIGSEGV,SIG_IGN); //Ignoring the Signal
        signal(SIGSEGV, sighandler);

        printf("Before segfault\n");

        int *a=NULL;
        int b=*a;


}


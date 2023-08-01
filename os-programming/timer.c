#include <stdio.h>
#include<unistd.h>
#include <time.h>
#include <string.h>

char * timestamp(){
    time_t now = time(NULL); 
    char * time = asctime(gmtime(&now));
    time[strlen(time)-1] = '\0';    // Remove \n
    return time;
}

int main () 
{
	int i,sec,counter=0;
	time_t ltime; /* calendar time */
	ltime=time(NULL); /* get current cal time */
	printf("enter a value for how much seconds a timer should run \n");
	scanf(" %d", &sec);

//	printf(" current time: %s",asctime( localtime(&ltime) ) );
	printf("current system time : %s\n",timestamp()); 
	for(counter = 0;counter<sec;counter++)
	{
		// delay of one second
		sleep(1);
		printf("time after each second : %s\n",timestamp()); 
		//printf(" time after each second : %s",asctime( localtime(&ltime) ) );
	}
	return 0;
}

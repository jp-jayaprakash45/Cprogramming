#include <stdio.h>

int main()
{
     int temp=0;
    char a1[]="Hello world";
    char b1[]="Hello";
    
    for(int i=0;a1[i] !='\0'|| b1[i]!='\0';i++)
    {
      if(a1[i] != b1[i] )
      {
          temp =1;
          break;
      }
    }
    if(temp==1)
    {
        printf("it's not a same string");
    }
    else{
        printf("it's a same string");
    }

    return 0;
}





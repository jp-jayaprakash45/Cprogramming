#include <stdio.h>

int main()
{
    int arr[] = {1, 2,2,3, 3, 4, 2, 3,0,0, 3, 1, 2, 5,5,5,5,5,5};
    
    int size;
    
    size = sizeof (arr)/sizeof (arr[0]);

    for (int i = 0; i < size; i++)
    {
        int count = 1; 
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                
                arr[j]=-1;
            }
        }

        if (count > 1 && arr[i] !=-1) 
        {
            printf("%d - %d times repeated\n", arr[i], count);
        }
    }
    return 0;
}

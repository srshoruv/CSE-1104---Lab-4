#include <stdio.h>

int main()

{   
    printf("Printing all the Even Numbers\n");
    printf("--------------------------------------\n");
    
    int i = 1;
    while (i <= 100) 
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    
    return 0;
}
#include <stdio.h>

int main()

{   
    printf("Printing all the alphabets from A to Z\n");
    printf("--------------------------------------\n");

    char ch = 'a';
    int i = 1;
    while (i <= 26) 
    {
        printf("%c", ch);
        ch ++;
        i++;
    }
    printf("\n");
    
    return 0;
}
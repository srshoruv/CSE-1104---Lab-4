#include <stdio.h>

int main()

{   
    printf("Printing the number in REVERSE\n");
    printf("--------------------------------------\n");
    
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    int temp = num;
    int rev = 0;

    while (num)
    {
        int lastDig = num % 10;
        rev = rev * 10 + lastDig;
        
        
        num = num / 10;
    }

    printf("%d in REVERSE is = %d\n",temp, rev);
    
    return 0;
}
// finding the frequency of each digit in a given integer

#include <stdio.h>

int main()

{   

    int num, freq[10] = {0};
    printf("Enter a number to start: ");
    scanf("%d", &num);

    while (num != 0)
    {
        int lastDig = num % 10;
        freq[lastDig]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d is appeared %d times\n", i, freq[i]);
        }
    }
    
    return 0;
}
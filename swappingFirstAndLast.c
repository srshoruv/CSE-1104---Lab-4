// Swapping first and last Digit of a Number

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a number to swap: ");
    scanf("%s", str);
    
    char temp;
    temp = str[0];
    str[0] = str[strlen(str)-1];
    str[strlen(str)-1] = temp;
    printf("After Swapping: %s\n", str);
}
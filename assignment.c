#include <stdio.h>
#include <math.h>
#include "head.h"

int main() 
{
    int number;                                     //leap year 
    printf("Check Leap Year\n");
    printf("Enter the number: ");
    scanf("%d", &number);
    
    leap(number) ? printf("%d leap year\n", number) : printf("%d not a leap year\n", number);


    int num;                                     //palindrome
    printf(" Check palindrome\n");
    printf("Enter the number: ");
    scanf("%d", &num);
    
    palin(num) ? printf("%d palindrome\n", num) : printf("%d not palindrome\n", num);
    return 0;
}

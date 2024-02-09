// Reverse and Palindrome

#include <stdio.h>
#include <math.h>

int main()
{

    int num, a, b = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    a = num ;

    while (a != 0)
    {
        b = (b * 10) + (a % 10) ;
        a = a / 10 ;
    }

    printf("The reverse of the number %d is: %d \n", num, b);

    if (b == num)
    {
        printf("The number %d is a palindrome", num);
    }
    else
    {
        printf("THe number %d is not a palindrome", num);
    }

    return 0;
}

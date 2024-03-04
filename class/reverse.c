// reverse a number, palindrome, amstrong number

#include <stdio.h>
#include <math.h>

int main()
{

    int num, a, b = 0, c = 0;

    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    a = num ;

    while (a != 0)
    {
        b = (b * 10) + (a % 10) ; // Palindrome
        c = c + ((a % 10)*(a % 10)*(a % 10)) ; // Amstrong Number
        a = a / 10 ;
    }

    printf("Reverse of number is: %d \n", b);
    printf("Sum of squares of digits of number is: %d \n", c);

    // Palindrome
    if (b == num)
    {
        printf("The number %d is a palindrome \n", num);
    }
    else
    {
        printf("The number %d is not a palindrome \n", num);
    }
    // Amstrong Number
    if (c == num)
    {
        printf("The number %d is an Amstrong Number \n", num);
    }
    else
    {
        printf("The number %d is not an Amstrong Number \n", num);
    }

    return 0;
}

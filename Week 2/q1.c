// check the number to be odd or even

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{

    int num;

    printf("Enter the number to check odd or even: ");
    scanf("%d", &num);

    (num % 2 == 0) ? (printf("The number %d is even", num)):(printf("The number %d is odd", num));

    return 0;
}

// function

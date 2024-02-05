// sum, differrence, product and quotient of 2 numbers

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{

    int a,b;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);

    printf("The sum of %d and %d is %d \n", a, b, a+b);
    printf("The difference of %d and %d is %d \n", a, b, a-b);
    printf("The product of %d and %d is %d \n", a, b, a*b);
    printf("The quotient of %d and %d is %f \n", a, b, (float)a/(float)b);

    return 0;
}

// function

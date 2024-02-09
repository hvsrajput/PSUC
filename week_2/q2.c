// largest among three numbers

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{
    float a,b,c;

    printf("Enter the number 'A': ");
    scanf("%f", &a);
    printf("Enter the number 'B': ");
    scanf("%f", &b);
    printf("Enter the number 'C': ");
    scanf("%f", &c);

    (a > b) ? ((a > c) ? (printf("A is the largest number")) : (printf("C is the largest number")) ) : ((b > c) ? (printf("B is the largest number")) : (printf("C is the largest number")) ) ;

    return 0;
}

// function

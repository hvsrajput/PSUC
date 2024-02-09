// smallest among three using conditional operator

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{
    float a, b, c;

    printf("Enter the number 'A': ");
    scanf("%f", &a);
    printf("Enter the number 'B': ");
    scanf("%f", &b);
    printf("Enter the number 'C': ");
    scanf("%f", &c);

    (a < b) ? ((b < c) ? (printf("A is the smallest number")) : (printf("C is the smallest number"))) : ((a < c) ? (printf("B is the smallest number")) : ((b < c) ? (printf("B is the smallest number")) : (printf("C is the smallest number"))));

    return 0;
}

// function

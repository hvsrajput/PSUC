// evaluate programs

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{

    float a = 30, b = 10, c = 5, d = 15;

    printf("The value of (a + b) * c / d is %.2f \n", (a + b) * c / d);
    printf("The value of ((a + b) * c) / d is %.2f \n", ((a + b) * c) / d);
    printf("The value of a + (b * c) / d is %.2f \n", a + (b * c) / d);
    printf("The value of (a + b) * (c / d) is %.2f \n", (a + b) * (c / d));

    return 0;
}

// function

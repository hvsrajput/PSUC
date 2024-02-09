// check for 0, positive or negative using else if ladder

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{

    float a;

    printf("Enter the number 'A': ");
    scanf("%f", &a);

    if (a > 0)
    {
        printf("A is a positive number");
    }
    else if (a < 0)
    {
        printf("A is a negative number");
    }
    else
    {
        printf("A is a zero");
    }

    return 0;
}

// function

// random function using else if ladder

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{

    float x;

    printf("Enter the value of 'X': ");
    scanf("%f", &x);

    if (x > 0)
    {
        printf("Y = 1");
    }
    else if (x < 0)
    {
        printf("Y = -1");
    }
    else
    {
        printf("Y = 0");
    }

    return 0;
}

// function

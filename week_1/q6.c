// calculate volume and surface area

#include <stdio.h>
#include <math.h>
#define pi 3.1416

// declare a function

int main()
{

    float r, v, sa;

    printf("Enter a radius: ");
    scanf("%f", &r);

    sa = 4 * pi * pow(r, 2);
    v = (4 * pi * pow(r, 3)) / 3;

    printf("Surface area: %f\nVolume: %f", sa, v);

    return 0;
}

// function

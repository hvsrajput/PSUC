// farenheit to celcius

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{

    float faren, celcius;

    printf("Enter temperature in farenheit: ");
    scanf("%f", &faren);

    celcius = (5*(faren + 32))/9;

    printf("%.2f Farenheit = %.2f Celcius", faren, celcius);

    return 0;
}

// function

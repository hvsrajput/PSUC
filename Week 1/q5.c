// compute SI and CI

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{

    int prin, noy;
    float roi, si, ci;

    printf("Enter the principal amount: ");
    scanf("%d", &prin);
    printf("Enter the number of years: ");
    scanf("%d", &noy);
    printf("Enter the rate of interest: ");
    scanf("%f", &roi);

    si = (prin * noy * roi) / 100;

    ci = (prin * (pow(1 + (roi / 100), noy))) - prin;

    printf("The principal amount is: Rs.%d \n", prin);
    printf("The number of years is: %d years \n", noy);
    printf("The rate of interest is: %f \n", roi);

    printf("Calculating Simple Interst and Compound Interest... \nSimple Interest: %.3f \nCompound Interest: %.3f", si, ci);

    return 0;
}

// function

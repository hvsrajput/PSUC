#include<stdio.h>

int main()
{
    float r, area;

    printf("Enter the radius: ");
    scanf("%f", &r);

    area = 3.1416*r*r;

    printf("The area of circle is: %.2f", area);
    printf("\n");

    return 0;
}

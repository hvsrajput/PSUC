// Largest of three numbers without using if or ternary operators

#include <stdio.h>
#include <math.h>
int max(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    printf("Enter C: ");
    scanf("%d", &c);

    // for (int i = 0;a>b && a>c && i<1; i++)
    // {
    //     printf("A is largest");
    // }
    // for (int i = 0;b>a && b>c && i<1; i++)
    // {
    //     printf("B is largest");
    // }
    // for (int i = 0;c>a && c>a && i<1; i++)
    // {
    //     printf("C is largest");
    // }

    printf("The largest num is: %d", max(a, b, c));

    printf("\n");
    return 0;
}

int max(int a, int b, int c)
{
    int m=a;
    (m<b) && (m=b);
    (m<c) && (m=c);
    return m;
}

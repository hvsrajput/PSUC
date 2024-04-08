// GCD of a number

#include <stdio.h>
#include <math.h>
#include <string.h>

int gcd(int a, int b);

int main()
{
    int num1, num2, temp;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter a number: ");
    scanf("%d", &num2);

    if (num2 > num1)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("The GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a%b);
    }
}

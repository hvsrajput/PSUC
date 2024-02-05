// perfect number

#include <stdio.h>
#include <math.h>

int main()
{
    int num, a, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("The divisors are: ");
    for (int i = 1; i < a; i++)
    {
        if (a%i == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\n");
    if (sum == a)
    {
        printf("perfect \n");
    }
    else
    {
        printf("not perfect \n");
    }

    return 0;
}

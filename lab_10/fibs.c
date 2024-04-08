// fibonacci series

#include <stdio.h>
#include <math.h>
#include <string.h>

int fibs(int a);

int main()
{
    int num;

    printf("Enter the fibonacci number: ");
    scanf("%d", &num);

    printf("The %dth fibonacci number is %d \n", num, fibs(num));

    return 0;
}

int fibs(int a)
{
    if (a == 1)
    {
        return 0;
    }
    else if (a==2)
    {
        return 1;
    }
    else
    {
        return (fibs(a-1) + fibs(a-2));
    }
}

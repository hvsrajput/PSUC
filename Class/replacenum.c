// title

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{
    int a[10], n, num, b;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    printf("Enter a number and position: ");
    scanf("%d %d", &num, &b);

    for (int i = n; i >= b; i--)
    {
        a[i] = a[i-1];
    }

    a[b] = num;

    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");
    
    return 0;
}

// function

// largest and smallest in 1D array

#include <stdio.h>
#include <math.h>

int main()
{
    int a[10], n, max, min;

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

    max = a[0];
    min = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("The largest and smallest numbers are %d and %d\n", max, min);
    
    return 0;
}

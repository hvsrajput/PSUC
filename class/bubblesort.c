// binary search

#include <stdio.h>
#include <math.h>

int main()
{
    int a[10], n, temp;

    printf("Enter value for number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) // for checking array elements
    {
        for (int j = 0; j < n-i-1; j++) // for swapping elements
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%dth element is: %d \n", i + 1, a[i]);
    }

    printf("The array is: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}

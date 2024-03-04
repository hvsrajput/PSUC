// Write a program to find second largest element in an array. 

#include <stdio.h>
#include <math.h>

int main()
{
    int a[100], n, max, pos;

    printf("Enter value for number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &a[i]);
    }

    max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            pos = i;
        }
    }

    for (int i = pos; i < n; i++)
    {
        a[i] = a[i+1];
    }

    max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            pos = i;
        }
    }

    printf("The second largest number is %d", max);
    
    printf("\n");

    return 0;
}

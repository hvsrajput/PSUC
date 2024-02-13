// search, delete element and display final array

#include <stdio.h>
#include <math.h>

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
    printf("Enter the number to search and delete: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            printf("Number %d found at %dth position \n", num, i);
            b = i;
            break;
        }
    }

    for (int i = b; i < n-1; i++)
    {
        a[i] = a[i+1];
    }

    for (int i = 0; i < n-1; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");
    
    return 0;
}

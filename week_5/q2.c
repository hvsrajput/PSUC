// Ascending and Descending using bubble sort

#include <stdio.h>
#include <math.h>

int main()
{
    int a[10], n;

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

    return 0;
}

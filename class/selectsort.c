#include <stdio.h>
#include <math.h>

int main()
{
    int a[100], n, min, pos;

    printf("Enter value for number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        min = a[i];
        pos = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < min)
            {
                pos = j;
                min = a[j];
            }
        }
        a[pos] = a[i];
        a[i] = min;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%dth element is: %d \n", i + 1, a[i]);
    }

    printf("\n");

    return 0;
}

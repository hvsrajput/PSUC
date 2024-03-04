#include <stdio.h>
#include <math.h>

int main()
{
    int arr[10], n;

    printf("Enter value for number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dth element is: %d \n", i + 1, arr[i]);
    }

    return 0;
}

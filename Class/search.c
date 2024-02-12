#include <stdio.h>
#include <math.h>

int main()
{
    int arr[100], n, num, found = 0;

    printf("Enter value for number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    printf("Enter a number to search: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (num == arr[i])
        {
            printf("The number is at %dth position", i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("The number %d is not present in array", num);
    }

    printf("\n");

    return 0;
}

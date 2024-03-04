#include <stdio.h>
#include <math.h>

int main()
{
    // reverse the 
    int arr[10], n, temp;

    printf("Enter value for number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < (n/2); i++)
    {
        temp = arr[i] ;
        arr[i] = arr[n - i - 1] ;
        arr[n - i - 1] = temp ;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dth element is: %d \n", i + 1, arr[i]);
    }

    return 0;
}

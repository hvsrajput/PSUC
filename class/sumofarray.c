#include <stdio.h>
#include <math.h>

int main()
{
    int arr1[10], arr2[10], a, b;

    printf("Enter value for number of elements for array 1: ");
    scanf("%d", &a);

    printf("Enter value for number of elements for array 1: ");
    scanf("%d", &b);

    if (a == b)
    {
        for (int i = 0; i < a; i++)
        {
            printf("Enter %dth element for array 1: ", i + 1);
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < b; i++)
        {
            printf("Enter %dth element for array 2: ", i + 1);
            scanf("%d", &arr2[i]);
        }
        for (int i = 0; i < a; i++)
        {
            printf("Sum of %dth element is: %d \n", i+1, arr1[i]+arr2[i]);
        }
    }
    else
    {
        printf("Equal elements entry only \nPlease restart the program.....");
    }
    
    printf("\n");
    return 0;
}

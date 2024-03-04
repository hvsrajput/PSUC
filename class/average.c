// Write a program to find average of an 1-D array

#include <stdio.h>
#include <math.h>

int main()
{
    int a[100], n, sum = 0;

    printf("Enter value for number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    
    printf("The average of the array is: %d \n", sum/n);

    return 0;
}

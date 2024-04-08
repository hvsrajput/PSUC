/*
Given a 1D array of integers, perform the following tasks: 
Task-1: Identify 2 integers in the given 1D array for which the product is the maximum amongst all the products. Display the indices for these 2 integers.
Task-2: Identify 2 integers in the given 1D array for which the product is the minimum amongst all the products. Display the indices for these 2 integers
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a[100], n, pos_max1 = 0, pos_max2 = 0, pos_min1 = 0, pos_min2 = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%dth number: ", i+1);
        scanf("%d", &a[i]);
    }

    int max = a[0]*a[1], min = a[0]*a[1];

    for (int i = 0; i < n; i++)
    {
        for (int j = i +1 ;j < n; j++)
        {
            if (max < a[i]*a[j])
            {
                max = a[i]*a[j];
                pos_max1 = i;
                pos_max2 = j;
            }
            if (min > a[i]*a[j])
            {
                min = a[i]*a[j];
                pos_min1 = i;
                pos_min2 = j;
            }
        }
        
    }

    printf("The max product is %d * %d : %d at index %d and index %d\n", a[pos_max1], a[pos_max2], max, pos_max1, pos_max2);
    printf("The min product is %d * %d : %d at index %d and index %d\n", a[pos_min1], a[pos_min2], min, pos_min1, pos_min2);
    
    return 0;
}

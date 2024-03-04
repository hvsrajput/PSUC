//Harshvardhan Singh_week 5_additional2.c
//search a number in an array

#include<stdio.h>

int main()
{
    int arr[100], n, num, pos, found = 0;

    printf("Enter the number of elements of array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%dth element: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            printf("The number %d encountered at %dth location\n", num, i);
            break;
        }
    }

    if(found == 0)
    {
        printf("The number %d not found in the array\n", num);
    }

    return 0;

}

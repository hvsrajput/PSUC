// Delete all the occurrences of the element present in the array which is inputted by the user

#include<stdio.h>

int main()
{
    int arr[100], n, num, pos[100], occur=0;

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
            pos[i] = i;
            printf("The number %d encountered at %d location\n", num, pos[i]);
            occur++;
            continue;
        }
    }

    for(int i = occur-1; i >= 0; i--)
    {
        for(int j = pos[i]; j < n-1; j++)
        {
            arr[j] = arr[j+1];
        }
    }

    for(int i = 0; i < n-occur; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;

}

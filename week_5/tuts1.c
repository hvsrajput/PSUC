//print primes in an array

#include<stdio.h>

int main()
{
    int arr[100], n, prime = 1;

    printf("Enter the number of elements of array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%dth element: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 2)
        {
            continue;
        }
        else
        {
            for(int j = 2; j < arr[i]; j++)
            {
                if(arr[i]%j == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if(prime == 1)
            {
                printf("%d\t", arr[i]);
            }
        }
    }

    return 0;

}


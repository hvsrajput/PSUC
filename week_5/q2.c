//Ascending and Descending sorting using bubbble sort

#include<stdio.h>

int main()
{
    int a[100], n, temp;
    char order;

    printf("Enter the number of elements of array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%dth element: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter a for ascending and d for descending: ");
    scanf(" %c", &order);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            switch(order)
            {
            case 'a':
                if(a[j] > a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
                break;

            case 'd':
                if(a[j] < a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
                break;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;

}

// sort using bubble sort and search using binary

#include <stdio.h>
#include <math.h>

int main()
{
    int a[10], n, temp;

    printf("Enter value for number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Ascending and Descending
    char order;

    printf("Enter a for ascending and d for descending: ");
    scanf(" %c", &order); // extra space added kyuki pichle scanf se newline introduce hua jo ye bkl read kar le raha tha

    if(order == 'a')
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if (a[j] > a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
    }
    else if (order == 'd')
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if (a[j] < a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
    }
    
    printf("The sorted array is:\t");

    // print sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    int num;
    
    do
    {
        // binary search
        int first = 0, last = (n-1), mid;

        // input the number to search
        printf("Enter a number to search in the array: ");
        scanf("%d", &num);
        
        switch(order)
        {
            case 'a':
                do
                {
                    mid = (first + last)/2;

                    if (a[mid] < num)
                        {
                            first = mid + 1;
                        }
                    else if (a[mid] > num)
                        {
                            last = mid -1;
                        }
                }while(a[mid] != num && first <= last);
            break;
            case 'd':
                do
                {
                    mid = (first + last)/2;

                    if (a[mid] < num)
                        {
                            last = mid - 1;
                        }
                    else if (a[mid] > num)
                        {
                            first = mid + 1;
                        }
                }while (a[mid] != num && first <= last);
            break;
        }
        if (a[mid] == num)
        {
            printf("%d found", num);
        }
        else
        {
            printf("%d not found", num);
        }
        printf("\n");
    }while (num != -1);
    
    printf("\n");

    return 0;
}
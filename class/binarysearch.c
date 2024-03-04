// binary search

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{
    int a[5] = {52, 68, 75, 88, 105}, first, last, mid, num;

    printf("Enter a number to search for: ");
    scanf("%d", &num);

    first = 0;
    last = 4;

    do
    {
        mid = (first + last)/2;

        if (a[mid] < num)
        {
            first = mid + 1;
        }
        else if (a[mid] > num)
        {
            last = mid - 1;
        }
    } while(a[mid] != num && first <= last);

    if (a[mid] == num)
    {
        printf("%d found", num);
    }
    else
    {
        printf("%d not found", num);
    }
    
    printf("\n");

    return 0;
}

// function

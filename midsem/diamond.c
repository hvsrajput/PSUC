// Diamond pattern

#include <stdio.h>
#include <math.h>


int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i+j >= n-1)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n-1; j++)
        {
            if(j < i)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}

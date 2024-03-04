//Harshvardhan Singh_week 6_q4.c
//interchanging primary and secondary elements of matrix

#include<stdio.h>
#include<math.h>

int main()
{
    int a[100][100], m, n, temp;

    printf("Enter the number of rows of array: ");
    scanf("%d", &m);
    printf("Enter the number of columns of array: ");
    scanf("%d", &n);

    if(m != n)
    {
        printf("The matrix is not a square matrix");
        end(0);
    }

    printf("Enter the elements of matrix: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    printf("The interchanged matrix is: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}

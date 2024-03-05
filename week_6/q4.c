//interchanging primary and secondary diagonal of matrix

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

    // get elements of matrix
    printf("Enter the elements of matrix: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // print original matrix
    printf("The matrix is: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Interchanging primary and secondary diagonal
     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (i == j)
            {   
                temp = a[i][j];
                a[i][j] = a[i][n-i-1];
                a[i][n-i-1] = temp;
            }
        }
    }

    // print final matrix
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

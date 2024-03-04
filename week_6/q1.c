// Find whether a given matrix is symmetric or not

#include<stdio.h>
#include<math.h>

int main()
{
    int a[100][100], m, n, symm = 1;

    printf("Enter the number of rows of array: ");
    scanf("%d", &m);
    printf("Enter the number of columns of array: ");
    scanf("%d", &n);

    if(m != n)
    {
        printf("The matrix is not a square matrix");
        end(0);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symm = 0;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    if(symm == 0)
    {
        printf("not a symmetric matrix");
    }
    else
    {
        printf("symmetric matrix");
    }

    return 0;

}

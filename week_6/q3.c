//matrix multiplication

#include<stdio.h>
#include<math.h>

int main()
{
    int a[100][100], b[100][100], c[100][100], m, n, p, q;
    float norm;

    printf("Enter the number of rows of array 1: ");
    scanf("%d", &m);
    printf("Enter the number of columns of array 1: ");
    scanf("%d", &n);

    printf("Enter the number of rows of array 2: ");
    scanf("%d", &p);
    printf("Enter the number of columns of array 2: ");
    scanf("%d", &q);

    if(n != p)
    {
        printf("The matrices cannot be multiplied");
        end(0);
    }

    printf("Enter the elements of array 1: ");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of array 2: ");
    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for(int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
        printf("\n");
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < q; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;

}

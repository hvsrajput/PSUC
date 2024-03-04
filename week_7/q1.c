// Sparse Matrix

#include <stdio.h>
#include <math.h>

int main()
{
    int a[100][100], m, n;

    printf("Enter value for number of rows: ");
    scanf("%d", &m);
    printf("Enter value for number of columns: ");
    scanf("%d", &n);

    // Input a matrix
    for (int i = 0; i < m; i++)
    {
        printf("Enter value for row %d: ", i+1);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }  
    }

    // Display the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Check for Sparse matrix
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }  
    }
    if (count > ((m*n)-count))
    {
        printf("The matrix is a sparse matrix\n");
    }
    else
    {
        printf("The matrix is not a sparse matrix\n");
    }

    return 0;
}

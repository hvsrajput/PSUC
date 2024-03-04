// Determinant of matrix

#include <stdio.h>
#include <math.h>

int main()
{
    int a[100][100], m, n;

    printf("Enter value for number of rows: ");
    scanf("%d", &m);
    printf("Enter value for number of columns: ");
    scanf("%d", &n);

    // Not  a square matrix
    if (m != n)
    {
        printf("Not a square matrix\n");
        goto end;
    }

    // Input a matrix
    for (int i = 0; i < m; i++)
    {
        printf("Enter value for row %d: ", i + 1);
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

    // Determinant of matrix
    int order, minor = 0, b[100], determinant = 0;
    order = m;
    for (int i = 0, j = 0; j < n; j++)
    {
        // element select hua let a00 hua select
        // ek order chhota matrix banaya
        for (int k = 0; k < m; k++)
        {
            
        }
    }

    for (int i = 0; i < m-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            printf("%d\t", b[i]);
        }
        printf("\n");
    }

end:
    return 0;
}

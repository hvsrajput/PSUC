// Sum of triangular elements

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

    // Calculate lower triangle sum
    int lower = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            lower += a[i][j];
        }
    }
    printf("The sum of the lower triangular elements is: %d\n", lower);

    // Calculate upper triangle sum
    int upper = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            upper += a[i][j];
        }
    }
    printf("The sum of the lower triangular elements is: %d\n", upper);

    return 0;
}

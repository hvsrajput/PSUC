//trace and norm of matrix

#include<stdio.h>
#include<math.h>

int main()
{
    int a[100][100], m, n, trace = 0, sum = 0;
    float norm;

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
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sum += (a[i][j] * a[i][j]);
        }
        trace += a[i][i];
        printf("\n");
    }

    norm = sqrt((float)sum);

    printf("The trace of matrix is: %d\nThe norm of matrix is: %.2f\n", trace, norm);

    return 0;

}

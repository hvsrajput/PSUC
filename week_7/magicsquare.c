//check for magic square matrix

#include <stdio.h>
#include <math.h>

int main()
{
    int a[100][100], m, n;

    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    if(m != n)
    {
        printf("Not a square matrix");
        goto end;
    }
    else
    {
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int rsum[100], csum[100], pdsum = 0, dsum = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                rsum[i] += a[i][j];
                csum[i] += a[j][i];
            }
            pdsum += a[i][i];
            dsum += a[i][n-i-1];
        }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d \t", a[i][j]);
            }
            printf("%d\n", rsum[i]);
        }
        for(int i = 0; i < m; i++)
        {
            printf("%d\t", csum[i]);
        }
        printf("\n");
        printf("Sum of principal diagonal elements: %d\n", pdsum);
        printf("Sum of secondary diagonal elements: %d\n", dsum);
    }

    end:
    return 0;
}

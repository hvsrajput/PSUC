// Generate the multiplication table for ‘n’ numbers up to ‘k’ terms

#include <stdio.h>
#include <math.h>

int main()
{

    int n, k;

    printf("Enter 'n'(no. of numbers): ");
    scanf("%d", &n);
    printf("Enter 'k'(no. of terms): ");
    scanf("%d", &k);

    for (int i = 1; i <= n; i++)
    {
        printf("Table of %d till %d: ", i, k);
        for (int j = 1; j <= k; j++)
        {
            printf("%d ",i*j);
        }
        printf("\n");
    }

    return 0;
}

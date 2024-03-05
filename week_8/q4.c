// Arrange 'n' names in alphabetical order

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char a[100][100], temp[100];
    int n, b;

    printf("Enter number of names you want to sort(all in small case): ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        printf("%d: ", i+1 );
        scanf(" %s", &a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d: ", i+1 );
        puts(a[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j < n; j++)
        {
            b = strcmp(a[i],a[j]);
            if(b > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d: ", i+1 );
        puts(a[i]);
    }

    return 0;
}

// floyd triangle

#include <stdio.h>
#include <math.h>

int main()
{
    int a, num,count =1;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d \t",count);
            count++;
        }
        printf("\n");
    }

    return 0;
}

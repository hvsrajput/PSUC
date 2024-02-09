// Prime number

#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c;

    printf("Enter the number: ");
    scanf("%d", &a);

    for (int i = 2; i <= sqrt(a); i++)
    {
        c = a % i ;
        if (c == 0)
        {
            printf("np");
            break;
        }
    }
    if (c != 0)
    {
        printf("p");
    }
    
    return 0;
}

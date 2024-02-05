// Prime numbers between limits

#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c, num, i, prime;

    printf("Enter the initial limit: ");
    scanf("%d", &a);
    printf("Enter the final limit: ");
    scanf("%d", &b);

    num = a;
    if (a < 2)
    {
        printf("2 3 ");
    }
    else if (a < 4)
    {
        printf("3 ");
    }
    
    while (num <= b)
    {
        i = 2 ;
        while (i <= sqrt(num))
        {
            c = num % i ;
            if (c == 0)
            {
                prime = 0 ;
                break;
            }
            else
            {
                prime = 1 ;
            }
            i++ ;
        }
        if (prime == 1)
        {
            printf("%d ", num);
        }
        num++ ;
    }    

    return 0;
}

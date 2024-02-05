// sum of first 100 integers

#include <stdio.h>
#include <math.h>

int main()
{

    int n = 1, sum = 0;

    while (n <= 100)
    {
        sum = sum + n ;
        n++ ;
    }
    printf("%d", sum);

    return 0;
}

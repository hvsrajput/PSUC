// evaluate the sin(x) series

#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main()
{
    int n;
    double p, x, sin = 0;

    printf("Enter the angle in series: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    x = x * (PI / 180);

    for (int i = 0; i < n; i++)
    {
        p = (2 * i) + 1;
        int fact = 1;
        for (int j = 1; j <= p; j++)
        {
            fact *= j;
        }
        sin += (pow(-1, i) * pow(x, p)) / (fact);
    }

    printf("The number is: %f \n", sin);

    return 0;
}

// late book return using else if ladder

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{

    int a;
    float fine;

    printf("Enter the number of days you are late to return the book: ");
    scanf("%d", &a);

    if (a <= 5)
    {
        fine = a * 0.50;
        printf("You need to pay %.2f rupees fine", fine);
    }
    else if (a <= 10)
    {
        fine = a * 1.00;
        printf("You need to pay %.2f rupees fine", fine);
    }
    else if (a <= 30)
    {
        fine = a * 5.00;
        printf("You need to pay %.2f rupees fine", fine);
    }
    else
    {
        fine = a * 10.00;
        printf("You need to pay %.2f rupees fine", fine);
    }

    return 0;
}

// function

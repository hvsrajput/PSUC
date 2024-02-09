// Check for strong number

#include <stdio.h>
#include <math.h>

int main()
{

    int num, rem, a, strong = 0;

    printf("Enter a number to check for Strong number: ");
    scanf("%d", &num);

    a = num;

    while (a != 0)
    {
        rem = a % 10;
        int i = 1, fact = 1; // har loop se pehle 'i' aur 'fact' ko reset hona padega.. isliye loop se pehle define aur initialize kiya
        while (i <= rem)
        {
            fact = fact * i;
            i++;
        }
        // printf("%d \n", fact);
        strong = strong + fact;
        // printf("%d \n", strong);
        a /= 10;
    }

    if (strong == num)
    {
        printf("%d is a strong number \n", num);
    }
    else
    {
        printf("%d is not a strong number \n", num);
    }

    return 0;
}

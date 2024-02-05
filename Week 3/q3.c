// Check for Amstrong number

#include <stdio.h>
#include <math.h>

int main()
{

    int num, reverse = 0, temp;

    printf("Enter a number to check for amstrong number: ");
    scanf("%d", &num);
    
    temp = num ;

    while (temp != 0)
    {
        reverse = reverse + ((temp % 10)*(temp % 10)*(temp % 10)) ;
        temp = temp / 10 ;
    }
    
    if (reverse == num)
    {
        printf("The number %d is an Amstrong Number \n", num);
    }
    else
    {
        printf("The number %d is not an Amstrong Number \n", num);
    }
    

    return 0;
}

// title

#include <stdio.h>
#include <math.h>

// declare a function

int main()
{
    int a,i;

    for ( a = 1; a<=2; a++)
    {
        for ( i = 1; i <=2; i++)
        {
            if (a==i) {
                break;
            }
            printf("\n %d \t %d \n",a,i);
        }
        
    }
    
}

// function

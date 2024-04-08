#include <stdio.h>

int main()
{
    int iNum = 'A';
    switch (iNum)
    {
    default:
        printf("\nINVALID");
    case 1:
        printf("\nONE");
    case 2:
        printf("\nTWO");
        
    case 'A':
        printf("\nTHREE");
    }
}
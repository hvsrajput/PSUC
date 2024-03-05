//if string is palindrome or not

#include <stdio.h>
#include <math.h>

int main()
{
    char a[100];
    int b, palin = 1;

    printf("Enter a string: ");
    gets(a);
    printf("The string is: ");
    puts(a);

    b = strlen(a);

    for(int i = 0; i <= b/2; i++)
    {
        if(a[i] != a[b-i-1])
        {
            palin = 0;
        }
    }

    if(palin == 0)
    {
        printf("The string is not a palindrome\n");
    }
    else
    {
        printf("The string is a palindrome\n");
    }

    return 0;
}

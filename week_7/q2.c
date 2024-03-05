//toggle words in a string

#include <stdio.h>
#include <math.h>

int main()
{
    const int MAX = 100;
    char a[MAX];
    int c;

    printf("Enter a string: ");
    gets(a);
    printf("The string is %s\n", a);

    int count = 0, i = 0, words = 0;
    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            c = (int)a[i];
            c -= 32;
            a[i] = (char)c;
        }
        else if(a[i] >= 'A' && a[i] <= 'Z')
        {
            c = (int)a[i];
            c += 32;
            a [i] = (char)c;
        }
    }
    printf("The string is: ");
    puts(a);
    return 0;
}

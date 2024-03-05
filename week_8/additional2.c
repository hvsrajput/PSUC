//Delete all repeated words from a string

#include <stdio.h>
#include <math.h>

int main()
{
    char a[100], b[100];
    int pos[100], l, i=0, j=0, len=0, k=0;

    printf("Enter a string: ");
    gets(a);
    printf("The string is: ");
    puts(a);

    printf("Enter a substring to search: ");
    gets(b);

    l = strlen(b);

    while(a[i] != '\0')
    {
        if(a[i] == b[j])
        {
            i++;
            j++;
            len++;
            if(l == len)
            {
                pos[k] = i-l+1;
                k++;
            }
        }
        else
        {
            i++;
            j=0;
            len=0;
        }
    }

    if(k != 0)
    {
        printf("The substring found at: ");
        for(int i=0; i<k; i++)
        {
            printf("%d\t", pos[i]);
        }
    }
    return 0;
}

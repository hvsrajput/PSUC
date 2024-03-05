//words in a sentence

#include <stdio.h>
#include <math.h>

int main()
{
    const int MAX = 100;
    char a[MAX];

    printf("Enter a string: ");
    gets(a);

    int count = 0, i = 0, words = 0;
    for(int i = 0; a[i] != '\0'; i++)
    {
        count++;
        if (a[i] == ' ' && a[i+1] != ' ')
        {
            words++;
        }
    }
    printf("The number of letters are: %d\n", count);
    printf("The number of words are: %d\n", words+1);

    end:
    return 0;
}

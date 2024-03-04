#include<stdio.h>
#include<string.h>
#include<psuc.h>

int main()
{
    const int MAX = 80;
    char str[MAX];

    printf("Enter you password: ");

    for (int i = 0; i < 10; i++)
    {
        str[i] = getch();
        printf("Lawda");
    }

    printf("\nYour password is ");
    puts(str);
    
    return 0;
}

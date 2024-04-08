#include <stdio.h>

int main()
{
    int a, b;
    char x;
    printf("enter your arithmetic problem: ");
    scanf("%d %c %d", &a, &x, &b);
    switch (x){
    case  '+' :
        printf("sum=%d", a + b);
        break;

    case '-': 
        printf("sum=%d", a - b);
        break;

     case '*':
        printf("sum=%d", a * b);
        break;

     case '/':
        printf("sum=%d", a / b);
        break;

    default :
        printf("Maa Chudao");

    }
    return 0;
}

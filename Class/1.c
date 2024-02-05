// Roots of the quadratic equation using switch case

#include <stdio.h>
#include <math.h>

int main()
{

    int choice;
    float a, b, c, D, p, q;

    printf("The basic format of a quadratic equation is ax^2 + bx + c \n");
    printf("Enter value for a: ");
    scanf("%f", &a);
    printf("Enter value for b: ");
    scanf("%f", &b);
    printf("Enter value for c: ");
    scanf("%f", &c);

    D = pow(b, 2) - 4 * a * c;

    printf("The value of D is %.2f \n", D);

    if (D > 0)
    {
        printf("Roots are real and distinct \n");
        choice = 1 ;
    }
    else if (D == 0)
    {
        printf("Roots are real and equal \n");
        choice = 2 ;
    }
    else
    {
        printf("Roots are imaginary \n");
        choice = 3 ;
    }

    switch (choice)
    {
    case 1:
        p = -b / (2 * a);
        q = (sqrt(D)) / (2 * a);
        
        printf("The roots of the equation are %.2f and %.2f", p+q,p-q);

        break;

    case 2:
        p = -b / (2 * a);
        q = (sqrt(D)) / (2 * a);

        printf("Both the roots of the equation are %.2f", p+q);

        break;

    case 3:
        p = -b / (2 * a);
        q = (sqrt(fabs(D))) / (2 * a);

        printf("The roots of the equation are %.2f+%.2fi and %.2f-%.2fi", p,q,p,q);

        break;
    }

    return 0;
}
// 69 lines ka code hai lawde
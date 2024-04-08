// Student data using structures

#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct student
{
    char name[50];
    int roll_no;
    struct marks
    {
        int m1;
        int m2;
        int m3;
    };
    float avg;
}stu;


int main()
{
    int num;
    stu name1[100];
    struct marks marks1[100];

    printf("Enter a number: ");
    scanf("%d", &num);

    // taking input
    for (int i = 0; i < num; i++)
    {
        printf("Enter the name, roll no and marks of m1, m2 and m3 for student %d: ", i+1);
        scanf("%s %d %d %d %d", &name1[i].name, &name1[i].roll_no, &marks1[i].m1, &marks1[i].m2, &marks1[i].m3);
        name1[i].avg = (marks1[i].m1 + marks1[i].m2 + marks1[i].m3)/3;
    }

    // printing outputs
    printf("\n*****Printing Output*****\n");

    for (int i = 0; i < num; i++)
    {
        printf("%s\t%d\t%.2f\n", name1[i].name, name1[i].roll_no, name1[i].avg);
    }

    // sorting and printing in ascending order of avg
    stu temp;
    int pos;
    for (int i = 0; i < num-1; i++)
    {
        pos = i;
        for (int j = i+1; j < num; j++)
        {
            if (name1[i].avg > name1[j].avg)
            {
                pos = j;
            }
            temp = name1[pos];
            name1[pos] = name1[i];
            name1[i] = temp;
        }

        // for (int j = 0; j < num-i-1; j++)
        // {
        //     if (name1[j].avg > name1[j+1].avg)
        //     {
        //         stu temp = name1[j];
        //         name1[j] = name1[j+1];
        //         name1[j+1] = temp;
        //     }
        // }
        
    }

    //printing sorted output
    printf("\n*****Printing Sorted Output*****\n");
    for (int i = 0; i < num; i++)
    {
        printf("%s\t\t%d\t%.2f\n", name1[i].name, name1[i].roll_no, name1[i].avg);
    }
    
    return 0;
}

// function

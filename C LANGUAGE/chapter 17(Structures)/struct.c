#include <stdio.h>
struct student_data
{
    int roll;
    char name[20];
    char branch[30];
    float cgpa;
    int year;
} stddt[20] = {939, "Aditya", "IT", 7.67, 2021,
               932, "Akash", "VOC IT", 7.50, 2021,
               936, "Ankush", "Electric", 8.14, 2023,
               961, "Saurabh", "Mach", 6.3, 2020,
               935, "Ankit", "NDA", 7.45, 2019

};

void rollno()
{
    int rollno;
    printf("Enter roll no: ");
    scanf("%d", &rollno);
    for (int i = 0; i <= 20; i++)
    {
        if (stddt[i].roll == rollno)
        {
            printf("%d\n", stddt[i].roll);
            printf("%s\n", stddt[i].name);
            printf("%s\n", stddt[i].branch);
            printf("%f\n", stddt[i].cgpa);
            printf("%d\n", stddt[i].year);
        }
    }
}

void name()
{
    char name1;
    char name[10];
    printf("Enter name: ");
    scanf("%s", name);
    strcpy(name1, name);
    for (int i = 0; i <= 20; i++)
    {
        if (stddt[i].name == name1)
        {
            printf("%d\n", stddt[i].roll);
            printf("%s\n", stddt[i].name);
            printf("%s\n", stddt[i].branch);
            printf("%f\n", stddt[i].cgpa);
            printf("%d\n", stddt[i].year);
        }
    }
}
void yoj()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    for (int i = 0; i <= 20; i++)
    {
        if (stddt[i].year == year)
        {
            printf("%d\n", stddt[i].roll);
            printf("%s\n", stddt[i].name);
            printf("%s\n", stddt[i].branch);
            printf("%f\n", stddt[i].cgpa);
            printf("%d\n", stddt[i].year);
        }
    }
}
int main()

{
    int choice;
    printf("\n---You can Search by roll.no, name or Year of joining---\n Enter '1' for search by roll\n Enter '2' for search by Name\n Enter '3' for search by Year of joing \n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        rollno();
        break;
    case 2:
        name();
        break;
    case 3:
        yoj();
        break;
    }

    return 0;
}
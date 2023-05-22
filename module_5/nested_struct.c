#include <stdio.h>
#include <string.h>
#define strSize 1000

struct Student
{
    char name[strSize];
    char mail[strSize];
    int mobile;
    float percentage;
};

struct Department
{
    char name[strSize];
    int _count;
    struct Student students[500];
    float average;
};

int main()
{
    int n;
    printf("Number of Inputs: ");
    scanf("%d", &n);

    struct Department departments[n];
    int x = 0;

    for (int i = 0; i < n; i++)
    {
        struct Student student;
        scanf("%s", student.name);
        scanf("%s", student.mail);
        scanf("%d", &student.mobile);
        scanf("%f", &student.percentage);

        char dept[strSize];
        scanf("%s", dept);

        int j = 0;
        for (; j < x; j++)
        {
            if (strcmp(departments[j].name, dept) == 0)
            {
                departments[j].average = (departments[j].average * (departments[j]._count + 1) + student.percentage) / (departments[j]._count + 2);
                departments[j].students[departments[j]._count++] = student;
                break;
            }
        }

        if (j == x)
        {
            struct Department department;
            department._count = 0;
            strcpy(department.name, dept);
            department.average = student.percentage;
            department.students[department._count] = student;
            departments[x++] = department;
        }
    }

    printf("Number of branches: %d\n", x);
    printf("Average of each department:\n");
    for (int i = 0; i < x; i++)
    {
        printf("%s - %.2f\n", departments[i].name, departments[i].average);
    }

    return 0;
}
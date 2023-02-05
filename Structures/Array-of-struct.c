#include<stdio.h>
#include<string.h>

struct student {
    char name[10];
    int roll;
    float cgpa;
}s1, s2, s3;

int main()
{
    struct student IT[50];
    struct student COE[50];
    struct student ECE[50];

    strcpy(IT[1].name, "Ananya");
    IT[0].roll = 10;

    printf("Name = %s\n", IT[1].name);
    printf("Roll no = %d\n", IT[0].roll);

    return 0;
}
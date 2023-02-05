#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("CW62.txt", "w");

    char name[20];
    int age;
    float cgpa;

    printf("Enter name :");
    scanf("%s", name);
    printf("Enter age :");
    scanf("%d", &age);
    printf("Enter cgpa :");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student name :%s\n", name);
    fprintf(fptr, "Student age :%d\n", age);
    fprintf(fptr, "Student cgpa :%f\n", cgpa);

    fclose(fptr);

    return 0;
}
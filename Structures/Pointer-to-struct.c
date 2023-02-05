#include<stdio.h>
#include<string.h>

struct student {
    char name[10];
    int roll;
    float cgpa;
}s1, s2, s3;

int main()
{
    struct student *ptr = &s1;
    strcpy(s1.name,"Ananya" );
    s1.roll = 10;
    s1.cgpa = 9.9;

    printf("student name = %s\n", (*ptr).name);
    printf("student roll = %d\n", ptr->roll);
    
    return 0;
}
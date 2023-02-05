#include<stdio.h>
#include<string.h>

struct student {
    char name[10];
    int roll;
    float cgpa;
}s1, s2, s3;

void printInfo(struct student s1);

int main()
{
    strcpy(s1.name,"Ananya" );
    s1.roll = 10;
    s1.cgpa = 9.9;

    printInfo(s1);

    return 0;
}

void printInfo(struct student s1){
    printf("student info :\n");
    printf("name :%s\n", s1.name);
    printf("roll no. :%d\n", s1.roll);
    printf("cgpa :%f\n", s1.cgpa);
}
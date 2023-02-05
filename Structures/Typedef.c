#include<stdio.h>
#include<string.h>

typedef struct ComputerEngineeringStudent{
    char name[10];
    int roll;
    float cgpa;
}coe;



int main()
{
    coe s1;
    
    s1.roll = 10;
    s1.cgpa = 9.9;
    strcpy(s1.name,"Ananya" );

    printf("student info :\n");
    printf("name :%s\n", s1.name);
    printf("roll no. :%d\n", s1.roll);
    printf("cgpa :%f\n", s1.cgpa);

    return 0;
}


   
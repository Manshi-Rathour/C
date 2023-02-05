#include<stdio.h>

int main()
{
    int marks[3];

    printf("Physics :");
    scanf("%d" , &marks[0]);

    printf("Chemistry :");
    scanf("%d" , &marks[1]);

    printf("Maths :");
    scanf("%d" , &marks[2]);

    printf("Physics = %d\n", marks[0]);
    printf("Chemistry = %d\n", marks[1]);
    printf("Maths = %d\n", marks[2]);

    return 0;

}
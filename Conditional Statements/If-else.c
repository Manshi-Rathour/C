#include<stdio.h>
int main()
{
    int age;
    printf("Enter age :");
    scanf("%d" , &age);

    if(age >=18) {
    printf("you are an adult");
    }
    else {
        printf("you are not an adult");
    }
    return 0;
}
#include<stdio.h>

int main()
{
    char firstname[50];
    printf("Enter first name :");
    scanf("%s", firstname);
    printf("Your first name is :%s\n" , firstname);
    
    char fullname[50];
    printf("Enter full name :");
    scanf("%s" , fullname);
    printf("Your full name is :%s\n" , fullname);
    
    return 0;
}
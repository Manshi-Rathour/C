#include<stdio.h>
#include<string.h>

int main()
{
    char firstname[50];

    printf("Enter first name :");
    fgets(firstname, 50, stdin);
    puts(firstname);

    char fullname[50];
    
    printf("Enter full name :");
    fgets(fullname, 50, stdin);
    puts(fullname);

    return 0;
}
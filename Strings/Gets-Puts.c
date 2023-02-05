#include<stdio.h>
#include<string.h>

int main()
{
    char fullname[50];

    printf("Enter full name :");
    fgets(fullname, 50, stdin);
    puts(fullname);

    return 0;
}

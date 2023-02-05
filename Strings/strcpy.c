#include<stdio.h>
#include<string.h>

int main()
{
    char oldval[40]="oldval";
    char newval[40];
    strcpy(newval, oldval);
    puts(newval);

    return 0;
}
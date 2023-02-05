#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("newfile.txt", "r");

    printf("character in file is :%c\n", fgetc(fptr));
    printf("character in file is :%c\n", fgetc(fptr));
    printf("character in file is :%c\n", fgetc(fptr));
    printf("character in file is :%c\n", fgetc(fptr));
    printf("character in file is :%c\n", fgetc(fptr));

    fclose(fptr);

    return 0;
}
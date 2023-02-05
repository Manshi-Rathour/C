#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("CW61.txt", "r");

    int n;
    printf("5 integers from file are :");
    printf("%d, %d, %d, %d, %d\n", fgetc(fptr), fgetc(fptr), fgetc(fptr), fgetc(fptr), fgetc(fptr));

    fclose(fptr);

    return 0;
}
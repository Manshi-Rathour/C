#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "w");

    char ch = 'A';
    fprintf(fptr, "%cpple", ch);

    fclose(fptr);

    return 0;
}
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("newfile.txt", "w");

    fputc('A', fptr);
    fputc('p', fptr);
    fputc('p', fptr);
    fputc('l', fptr);
    fputc('e', fptr);

    fclose(fptr);

    return 0;
}
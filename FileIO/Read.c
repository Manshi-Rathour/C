#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    char ch;
    if(fptr == NULL){
        printf("doesn't exist!\n");
    }
    else{
        fscanf(fptr, "%c", &ch);
        printf("Character in file is :%c\n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Character in file is :%c\n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Character in file is :%c\n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Character in file is :%c\n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Character in file is :%c\n", ch);
        
        fclose(fptr);
    }
    return 0;
}
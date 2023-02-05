#include<stdio.h>
#include<string.h>

int main()
{
    char name[] = "Manshi Rathour";
    
    for(int i=0 ; name[i] != '\0' ; i++) {
        printf("%c" , name[i]);
    }
    printf("\n");
    return 0;
}
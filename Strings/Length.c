// count length without using strlen
#include<stdio.h>
#include<string.h>

int countlength(char arr[]);

int main()
{
    char name[]= "Manshi";
    
    printf("Length is %d\n" , countlength(name));

    return 0; 
}

int countlength(char arr[]){
    int count = 0;
    for(int i=0 ; arr[i] !='\0'; i++) {
        count++;
    }
    return count;
}
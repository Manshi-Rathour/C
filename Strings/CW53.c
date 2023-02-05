#include<stdio.h>
#include<string.h>

int countVow(char arr[]);

int main()
{
    char str[] = "Manshi Rathour";
    printf("Vowels are %d\n", countVow(str));
}

int countVow(char str[]) {
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
    if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
        count++;
    }
    }
    return count;
}
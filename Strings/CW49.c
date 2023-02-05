#include<stdio.h>
#include<string.h>

int printlength(char arr[]);

int main()
{
    char name[50];
    fgets(name, 50, stdin);
    printf("Length is %d\n",printlength(name));

    return 0;

}

int printlength(char arr[]) {
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
    count++;
    }
    return count-1;
}
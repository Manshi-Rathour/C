#include<stdio.h>
int main() 
{
    int number;
    printf("Enter number :");
    scanf("%d" , &number);

    if(number >= 1) {
        printf("natural number\n");
    }
    else {
        printf("not natural number\n");
    }
    return 0;
}


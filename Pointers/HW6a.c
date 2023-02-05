#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter first number :");
    scanf("%d" , &a);
    printf("Enter second number :");
    scanf("%d" , &b);

    if(a>b) {
        printf("Maximum number :%d\n" , a);
    }
    else{
        printf("Maximum number :%d\n" , b);
    }
    return 0;
}
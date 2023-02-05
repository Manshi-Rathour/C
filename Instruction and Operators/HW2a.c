#include<stdio.h>

//Average of three numbers

int main()
{
    int a,b,c;

    printf("enter a \n");
    scanf("%d" , &a);
    printf("enter b \n");
    scanf("%d" , &b);
    printf("enter c \n");
    scanf("%d" , &c);

    printf("average of three numbers is : %d" , (a+b+c)/3);

    return 0;
}
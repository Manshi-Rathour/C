#include<stdio.h>
int main()
{
    printf("%d\n" , 3<4 && 4<5);
    printf("%d\n" , 5>6 && 2<1);

    printf("%d\n" , 2>1 || 9<8);
    printf("%d\n" , 6<8 || 8>7);

    printf("%d\n" , !(6<8 && 5>6));
    printf("%d\n" , !(2>2 || 7<8));

    return 0;
}
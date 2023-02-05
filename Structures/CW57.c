#include<stdio.h>
#include<string.h>

struct vector {
    int x;
    int y;
}v1, v2, sum;

void printSum(struct vector v1, struct vector v2, struct vector sum);

int main()
{
    v1.x = 5;
    v1.y = 10;
    v2.x = 15;
    v2.y = 20;
    struct vector sum ={0};

    printSum(v1, v2, sum);
    return 0;
}

void printSum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of x is :%d\n", sum.x);
    printf("sum of y is :%d\n", sum.y);
}
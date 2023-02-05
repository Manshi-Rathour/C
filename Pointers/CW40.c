#include<stdio.h>

void doWork(int a , int b , int *sum , int *prod , int *avg);

int main()
{
    int a = 3 ; int b = 5;
    int sum , prod , avg;
    doWork(a, b, &sum, &prod, &avg);
    printf("sum = %d\n , prod = %d\n , avg = %d\n" , sum, prod, avg);

    return 0;
}

void doWork(int a , int b , int *sum , int *prod , int *avg) {
    int sum = a + b;
    int prod = a * b;
    int avg =(a+b)/2;
}
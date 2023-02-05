#include <stdio.h>

int factorial(int n);

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d" , &n);
    printf("Factorial is :%d" , factorial(n));

    return 0;
}

int factorial(int n) {
    if(n==0) {
        return 1;
    }
    int factNm1 = factorial(n-1);
    int factN = factNm1 * n;

    return factN;
}
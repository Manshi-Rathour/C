#include<stdio.h>
#include<math.h>

int calSqRoot(int n);

int main()
{
    int num;
    printf("Enter number:");
    scanf("%d", &num);
    printf("%d\n", calSqRoot(num));

    return 0;
}

int calSqRoot(int n){
    int SqRoot = pow(n,(1/2));
    return SqRoot;
}
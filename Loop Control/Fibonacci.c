#include<stdio.h>
int main()
{
    int a=0, b=1, c, i, n;
    printf("Enter n : ");
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        printf("%d\t", a);         // 0  // 1  // 1  // 2  // 3  // 5
        c = a + b;                 // 1  // 2  // 3  // 5  // 8
        a = b;                     // 1  // 1  // 2  // 3  // 5
        b = c;                     // 1  // 2  // 3  // 5  // 8
    }
    return 0;
}
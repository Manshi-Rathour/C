#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n , *ptr;
    printf("enter n :");
    scanf("%d", &n);

    ptr = (int *)calloc(n , sizeof(int));
    for(int i=0; i<n; i++){
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    
    return 0;
}
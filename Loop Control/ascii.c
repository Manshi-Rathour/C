#include<stdio.h>

int main()
{
    short i;
    for(i=0; i<256; i++)
    {
        printf("%d = %c", i,i);
        printf("\t");
    }
    
    return 0;
}


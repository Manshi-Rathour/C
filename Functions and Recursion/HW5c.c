#include<stdio.h>

int main()
{
    int Temp;
    printf("Enter Temp :");
    scanf("%d" , &Temp);

    if(Temp>30 && Temp<50) {
        printf("Hot\n");
    }
    else if (Temp<30 && Temp>0) {
        printf("Cold\n");
    }
    
    return 0;
}


    

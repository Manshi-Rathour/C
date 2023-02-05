#include <stdio.h>
#include <string.h>

typedef struct Bank_Account_Info
{
    char name[20];
    int acc_no;
} Acc;

int main()
{
    Acc p1, p2;
    p1.acc_no = 54;
    p2.acc_no = 78;
    strcpy(p1.name, "Manshi Rathour");
    strcpy(p2.name, "Mayank Rathour");
    printf("Name of the person p1 is %s and account no. is %d\n", p1.name, p1.acc_no);
    printf("Name of the person p2 is %s and account no. is %d\n", p2.name, p2.acc_no);

    return 0;
}
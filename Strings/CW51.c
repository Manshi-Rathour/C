#include<stdio.h>
#include<string.h>

void salting(char password[50]);

int main()
{
    char password[50];
    scanf("%s", password);
    salting(password);
}

void salting(char password[50]) {
    char salt[]= "123";
    char newpassword[100];

    strcpy(newpassword, password);
    strcat(newpassword, salt);
    puts(newpassword);

}
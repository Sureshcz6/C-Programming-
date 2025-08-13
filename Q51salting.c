#include<stdio.h>
#include<string.h>
int main()
{
    char Password[100];
    printf("Enter Password : ");
    // fgets(Password,100,stdin);
    scanf("%s",Password);
    printf("your normal Password : ");
    puts(Password);
    char save[]="123";
    strcat(Password,save);
    printf("New Password = ");
    puts(Password);
    return 0;
}
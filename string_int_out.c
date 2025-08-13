#include<stdio.h>

int main()
    {
         char str[100];
         printf("Enter any sentence :\n");
         gets(str);
         puts(str);
         fgets(str,100,stdin);
         puts(str);
        return 0;
    }
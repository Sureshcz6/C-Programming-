#include<stdio.h>
#include<string.h>
int main()
    {
        char firststr[100] = "Hello ";
        char secondstr[]= "world";
        strcat(firststr,secondstr);
        // printf("%s",firststr);
        puts(firststr);
        return 0;
    }
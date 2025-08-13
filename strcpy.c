#include<string.h>
#include<stdio.h>
int main()
    {
        char oldstr[]="cat";
        char newstr[]="dog";
        strcpy(newstr,oldstr);
        printf(newstr);
        return 0;
    }
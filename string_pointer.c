#include<stdio.h>
int main()
    {
        char *canchange = "Hello World";
        puts(canchange);
        canchange = "Hello kon";
        puts(canchange);                           // can be change before intital of sting from the pointers                     

        char cannotchange = "Hello Coders";
        puts(cannotchange);
        cannotchange = "Hello Hum";             //no change in before initial of string from the array
        puts(cannotchange);
        return 0;
    }
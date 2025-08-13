#include<stdio.h>

void string_1(char arr[100]);
int main()
    {
        char arr[]=" what is your name bro please tell me about yourself in short sentence.";
        string_1(arr);
        return 0;
    }

void string_1(char arr[100])
    {
        for(int i=0;arr[i]!='\0';i++)
            {
                printf("%c",arr[i]);
            }
    }
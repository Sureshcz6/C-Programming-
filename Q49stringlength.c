#include<stdio.h>
int main()
    {
        char lenth[100];int count=0;
        fgets(lenth,100,stdin);
        puts(lenth);
        for(int i=1;lenth[i]!='\0';i++)
            {
                ++count;
            }
        printf("\nstring lenth is =  %d",count);
        return 0;
    }
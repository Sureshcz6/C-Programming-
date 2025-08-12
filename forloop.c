#include<stdio.h>
int main()
    {
        int i,j;
        for(i=1;i<10;i++)
            {
                for(j=1;j<=10;j++)
                    {
                        printf("%d,%d",i,j);
                    }
                printf("\n");
            }
        for(int k=10;k<=100;k+=10)
            {
                printf("%d,",k);
            }
        for(char s=97;s<=122;s++)
            {
                printf("\n%c",s);
            }
        return 0;
    }
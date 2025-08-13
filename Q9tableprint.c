#include<stdio.h>
int main()      //Q9. Print 1-100 number in row by column. Le 111 21 31 41.91

    {
        int i,j;
        for(i=1;i<10;i++)
            {
                for(j=0;j<10;j++)
                    {
                        printf("%d",j);
                        printf("%d",i);
                        printf(" ");

                    }
                printf("\n");
            }
        for(int k=10;k<=100;k=k+10)
            {
                printf("%d ",k);
            }
        return 0;
    }
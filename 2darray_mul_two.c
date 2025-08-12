#include<stdio.h>
int main()
    {
        int array[4][2];
        for(int i=0;i<10;i++)
            {
                int j=0;
                array[i][j]=(i+1)*2;
                printf("%d ",array[i][j]);
            }
            printf("\n");
        for(int i=0;i<10;i++)
            {
                int j=1;
                array[i][j]=(i+1)*3;
                printf("%d ",array[i][j]);
            }
        return 0;
    }
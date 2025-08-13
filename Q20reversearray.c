#include<stdio.h>
int main()          // array in reverse order print value
    {
        int array[100];
        int inc=0,range;
        printf("ENTER THE RANGE : ");
        scanf("%d",&range);
        while(inc!=range)
            {
                scanf("%d",&array[inc]);
                inc++;   
            }
        for(int i=range-1;i>=0;i--)
            {
                printf("%d\t",array[i]);
            }
    }
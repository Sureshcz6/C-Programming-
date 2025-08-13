#include<stdio.h>
int main()          // using array in pointer stored num and calc. sum
    {
        int array[100];
        int *ptr=&array[0];
        int range,sum=0;
        printf("ENTER THE RANGE : ");
        scanf("%d",&range);
        for(int i=0;i<range;i++)
            {
                scanf("%d",(ptr+i));
                sum+=*(ptr+i);
            }
        printf("THE SUM OF ALL NUMBRE : %d",sum);
        return 0;
    }
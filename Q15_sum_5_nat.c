#include<stdio.h>
int main()
    {
        int Num;
        int i,j,sum=0;
        printf("Enter Number of range: ");
        scanf("%d",&Num);
        for(i=1,j=Num;i<=Num && j>=1;i++,j--)
            {
                sum+=i;
                printf("%d\n",j);
            }
        printf("sum of five number %d ",sum);
        //  
        return 0;
    }
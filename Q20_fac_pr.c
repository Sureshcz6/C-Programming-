#include<stdio.h>
int main()
    {

        long Num,fact=1;
        printf("ENTER NUMBER: ");
        scanf("%d",&Num);
        for(int i=1;i<=Num;i++)
            {
                fact*=i;
            }
        printf("FACTORIAL OF GIVEN Number: %d ",fact);
        return 0;
    }
#include<stdio.h>
int main()
    {
        int year;
        printf("ENTER A YEAR: = ");         
        scanf("%d",&year);
        if(year%4==0)                         // year=(year%4==0)? true: flase;
            {
                printf("LEAP YEAR = %d",year);
            }
        else        
            {
                printf("NOT LEAP YEAR");
            }
        return 0;

    }
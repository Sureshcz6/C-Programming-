#include<stdio.h>
int main()
    {       //two number in find maximum and minimum
         int fnum,snum;
        printf("ENTER TWO NUMBER : ");
        scanf("%d %d",&fnum,&snum);
        
        // int save=fnum>snum?fnum:snum;
        // printf("MAXIMUM NUMBER IS = %d",save);
        if(fnum>snum)
            {
                printf("maxi %d\t",fnum);
             
                printf("minimum %d",snum);
            }
        else
            {
                 printf("Max %d\t",snum);
                printf("Min %d",fnum);   
            }       
        return 0;
    }
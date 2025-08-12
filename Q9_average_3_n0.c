#include<stdio.h>
int main()
    {
        int fnum,snum,tnum;float Avg;
        printf("Enter first value");
        scanf("%d",&fnum);
        printf("ENTRER SECOND VALUE");
        scanf("%d",&snum);
        printf("ENTER THIRD VALUE");
        scanf("%d",&tnum);
        Avg=(fnum+snum+tnum)/3;
        printf("Average of three Number %f: ",Avg);
        return 0;
    }
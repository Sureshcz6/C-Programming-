#include<stdio.h>
int main()
    {
        int fnum,snum,tnum;
        printf("Enter fist Number: ");
        scanf("%d",&fnum);
        printf("Enter Second Number: ");
        scanf("%d",&snum);
        int result=(fnum>snum)*snum+(snum>fnum)*fnum;
        printf("%d",result);
        printf("Is the smallest no");
     return 0;  
    }
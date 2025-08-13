#include<stdio.h>
int main()          //check pallindrome or not
    {
        int num,rev=0,rem;
        printf("ENTER A NUMBER : ");
        scanf("%d",&num);
        int save=num;
        while(num!=0)
            {
                rem=num%10;
                rev=(rev*10)+rem;
                num=num/10;
            }
        if(save==rev)
            {
                printf("NUMBER IS PALLINDROME : %d",save);
            }
        else    
            {
                printf("not pallindrome : %d",save);
            }
        return 0;
    }
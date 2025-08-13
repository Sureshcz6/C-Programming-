#include<stdio.h>
int sum(int,int);
int main()
    {
        int fnum,snum;
        printf("Enter first Number: ");
        scanf("%d",&fnum);
        printf("Enter second Number: ");
        scanf("%d",&snum);
        int ret=sum(fnum,snum);     //arguments/actual parameters 
        printf("Sum of two number : %d",ret);
        return 0;
    }

    int sum(int x,int y)    //parameter/formal parameters
        {
            return (x+y);
        }
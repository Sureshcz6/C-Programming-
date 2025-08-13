#include<stdio.h>
void sum(int,int);
void product(int,int);
float average(int,int);
// void dowork(int a,int b,int *sum,int *prod,int *avg);
int main()
    {
        int fnum,snum;float ret;
        printf("Enter first Number: ");
        scanf("%d",&fnum);
        printf("Enter second Number: ");
        scanf("%d",&snum);
        sum(fnum,snum);
        product(fnum,snum);
        ret=average(fnum,snum);
        printf("\nAverage of two Number = %f",ret);

        return 0;
    }

void sum(int one,int two)
    {
        int total=one+two;
        printf("\nSum of two Number = %d",total);
    }
void product(int one,int two)
    {
        int total=one*two;
        printf("\nProduct of two Number = %d",total);
    }
float average(int one,int two)
    {
        float ret=(one+two)/2;
        return ret;
    }
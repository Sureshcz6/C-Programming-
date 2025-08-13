#include<stdio.h>
int fact(int);
int main()
    {
        int range;
        printf("enter numbe : ");
        scanf("%d",&range);
        int save=fact(range);
        printf("factorial of given number: %d",save);
        return 0;
    }

    int fact(int num)
        {
            if(num==0)
                {
                    return 1;
                }
            int fact1=fact(num-1);
            int fact2=fact1*num;
            return fact2;
        }
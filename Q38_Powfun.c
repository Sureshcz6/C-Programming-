#include<stdio.h>
int Powfun(int);
int main()
    {
        int Num;
        printf("enter Number: ");
        scanf("%d",&Num);
        int ret=Powfun(Num);
        printf("Given Number of Power: %d",ret);
        return 0;
    }
    int Powfun(int value)
        {
            int power,save=1;
            printf("enter power: ");
            scanf("%d",&power);
            for(int i=1;i<=power;i++)
                {
                    save=save*value;
                }
            return save;
        }

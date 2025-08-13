#include<stdio.h>
int Natural(int);
int main()
    {
        int range,save;
        printf("enter range of sum: ");
        scanf("%d",&range);
        save=Natural(range);
        printf("Sum of Natural Number : ",save);
        return 0;
    }
    int Natural(int num)
        {
            int save,total;
            if(num==1)
                {
                    return 1;
                }
            save=Natural(num-1);
            total=save+num;
            return total;
        }
        //  int sum;
        //     if(num==1)
        //         {
        //             return;
        //         }
        //     sum=sum+num;
        //     sum=Natural(num-1);
        //     return sum;
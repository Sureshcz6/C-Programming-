#include<stdio.h>
#include<math.h>
int square(int);
int main()
    {
        int Num;
        printf("enter any number: ");
        scanf("%d",&Num);
        int ret=square(Num);
        printf("square of given Number: %d",ret);
        return 0;

    }

    int square(int pass)
        {
            // int save=pow(pass,2);
            return(pass*pass);
            // return save;
        }
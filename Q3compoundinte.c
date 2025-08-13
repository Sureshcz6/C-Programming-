#include<stdio.h>
#include<math.h>
float Compound_interest(float,int,float,float);
int main()       
                       //compound interest calculate

    {
        float Principal,rate,time;
        int num;
        printf("Enter the Principal Amount = ");
        scanf("%f",&Principal);
        printf("Enter Number of Times Interest Compounded = ");
        scanf("%d",&num);
        printf("Enter Interest Rate = ");
        scanf("%f",&rate);
        printf("Enter Times in Years = ");
        scanf("%f",&time);
        float ret=Compound_interest(Principal,num,rate,time);
        printf("Compound Interest is = %f",ret);
        return 0;
    }

float Compound_interest(float pri,int num,float rate,float time)
                        {
                            float Amount;
                            Amount=pri*pow((1+rate/num),(num*time));
                            return Amount;
                        }
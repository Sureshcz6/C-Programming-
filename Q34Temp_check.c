#include<stdio.h>
void TempCov(float);
int main()
    {
        float Temp;
        printf("Enter Temperature in celcius: ");
        scanf("%f",&Temp);
        TempCov(Temp);
        return 0;     
    }
void TempCov(float Temp)
    {
        float faren=Temp*(9.0/5.0)+32;
        if(Temp>=0&&Temp<=40)
            {
                printf("Temperature is Normal: %f",faren);
            }
        else if(Temp>=41&&Temp<=100)
            {
                printf("Temperature is very hot: %f",faren);
            }
        else 
            {
                printf("Temperature is very cold: %f",faren);
            }

        printf("\nCheck again Temperature");

    }
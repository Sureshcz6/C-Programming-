#include<stdio.h>
float Convert_Temp(float);
int main()
    {
         float Temp;
         printf("ENTER TEMPERATURE IN CELCIUS: ");
         scanf("%f",&Temp);
          float ret=Convert_Temp(Temp);
         printf("Converted celcius to fahrenheit: %f",ret);
        return 0;

    }

float Convert_Temp(float Change)
    {
        float faren=Change*(9.0/5.0)+32;
        return faren;
    }
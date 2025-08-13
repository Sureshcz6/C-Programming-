#include<stdio.h>
float Cal(float);
int main()
    {
        float value;
        printf("enter price: ");
        scanf("%f",&value);
        float ret=Cal(value);
        printf("Calculate of Price including 18 gst:  %f",ret);
        return 0;
    }
    float Cal(float money)
        {
            int save=money+(0.18*money);
            return save;
        }
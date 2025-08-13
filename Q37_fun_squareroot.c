#include<stdio.h>
#include<math.h>
float Squ_root(int);
int main()
    {
        int Num;
        printf("Enter Any Number: ");
        scanf("%d",&Num);
        float ret=Squ_root(Num);
        printf("The Number of Root: %f",ret);
        return 0;
    }

    float Squ_root(int value)
        {
            float save=sqrt(value);
            return save;
        }
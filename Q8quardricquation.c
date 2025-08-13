#include<stdio.h>
#include<math.h>
int main()   
            //Q8. Write a program to Find all the roots of a quadratic equation in C.
    {
        float a,b,c,D,root1,root2;
        printf("ENTER COSEFFICENTS  a,b and c : ");
        scanf("%f %f %f",&a,&b,&c);

        D=b*b-4*a*c;
        if(D==0)
            {
                printf("THE roots are real and equal");
                root1=-b/(2*a);
                root2=-b/(2*a);
                printf("root 1 is %f \tand root 2 is %f",root1,root2);
            }
        else if(D>0)
            {
                printf("roots are real and different\n");
                root1=(-b+sqrt(D))/(2*a);
                root2=(-b-sqrt(D))/(2*a);  
                printf("root 1 is %f \tand root 2 is %f",root1,root2);         
            }
        else
            {
                printf("roots are imaginary ");
            }
        return 0;
    }
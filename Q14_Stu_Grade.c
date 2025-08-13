#include<stdio.h>
int main()
    {
         int marks;
         printf("Enter marks of student: ");
         scanf("%d",&marks);
         if(marks>=90&&marks<=100)
            {
                printf("GRADE: A+");
            }
        else if(marks>=70&&marks<90)
            {
                
                printf("GRADE: A");
            }
        else if(marks>=30&&marks<70)
            {
                printf("GRADE: B");
            }
        else if(marks<30)
            {
                printf("GRADE: C");
            }
        else
            {
                printf("VERY NICE");
            }
        return 0;
    }
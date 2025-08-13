#include<stdio.h>
float student(int,int,int);
int main()
    {
        int Math,Sci,Sans;
        printf("Enter Marks of Math: ");
        scanf("%d",&Math);
        printf("Enter Marks of Science: ");
        scanf("%d",&Sci);
        printf("Enter Marks of Sanskrit: ");
        scanf("%d",&Sans);
        float ret=student(Math,Sci,Sans);
        printf("The Percentage of given Subjects: %f",ret);
        return 0;
    }
    float student(int ma,int sc,int san)
        {
            // float Perc=(ma+sc+san)/5;//(a+b+c/3)*100;
            float Perc=((ma+sc+san)/3);
            return Perc;
        }
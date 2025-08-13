#include<stdio.h>
#include<string.h>

    struct student
    {
        int roll;
        float cgpa;
        char name[100];
    };
int main()
    {
        struct student ece[100];
        ece[0].roll=1664;
        ece[0].cgpa=9.2;
        strcpy(ece[0].name,"Monster");

        printf("name = %s\n",ece[0].name);
        printf("name = %d\n",ece[0].roll);
        printf("name = %f\n",ece[0].cgpa);
        return 0;
    }
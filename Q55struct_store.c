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
        struct student s1;
        s1.roll=1;
        s1.cgpa=9.34;
        strcpy(s1.name,"daredevil");
        printf("student name = %s\n",s1.name);
        printf("student roll no = %d\n",s1.roll);
        printf("student cgpa = %f\n\n",s1.cgpa);

        struct student s2;
        s2.roll=2;
        s2.cgpa=10.89;
        strcpy(s2.name,"MONSTER");
        printf("student name = %s\n",s2.name);
        printf("student roll no = %d\n",s2.roll);
        printf("student cgpa = %f\n\n",s2.cgpa);

        struct student s3;
        s3.roll=3;
        s3.cgpa=11.34;
        strcpy(s3.name,"BLACK BUNNY");
        printf("student name = %s\n",s3.name);
        printf("student roll = %d\n",s3.roll);
        printf("student cgpa = %f\n\n",s3.cgpa);

        return 0;
    }
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
        struct student s1 = {1,12.23,"Monster"};
        struct student s2 = {2,13.52,"DAREDEVIL"};
        struct student s3 = {3,14.34,"movie"};
        printf("student roll no = %d\t",s1.roll);
        printf("student cgpa = %f\t",s1.cgpa);
        printf("student name = %s\t",s1.name);
        printf("\n");
        printf("student roll no = %d\t",s2.roll);
        printf("student cgpa = %f\t",s2.cgpa);
        printf("student name = %s\t",s2.name);
        printf("\n");
        printf("student roll no = %d\t",s3.roll);
        printf("student cgpa = %f\t",s3.cgpa);
        printf("student name = %s\t",s3.name);

        return 0;
    }
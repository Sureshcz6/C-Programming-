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
        struct student s1 = {1664,9.23,"Monster"};
        printf("student roll = %d",s1.roll);
        printf("\n");
        struct student *ptr;
        ptr=&s1;
        printf("student name using pointer : %s\n",(*ptr).name);// access value with pointer
        printf("student roll no = %d",ptr->roll);
        return 0;
    }
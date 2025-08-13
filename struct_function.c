#include<stdio.h>
    
    struct student 
        {
            int roll;
            float cgpa;
            char name[1000];
        };
void printinfo(struct student s1); // always declare after struct data types and strture after 

    int main()
        {
            struct student s1 = {1663,9.2,"Hello"};
            printinfo(s1);  // jisse value ko access kar sakte hai ushe ko bhejo sakte hai
            return 0;
        }
    void printinfo(struct student s1)
        {
            printf("student Information : \n");
            printf("student. roll = %d  \n",s1.roll);
            printf("student cgpa : %f\n",s1.cgpa);
            printf("student name : %s\n",s1.name);
        }
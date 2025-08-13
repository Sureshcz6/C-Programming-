#include<stdio.h>

int main()
    {
        FILE *fptr;
        fptr= fopen("student.txt","w");

        char name[200];
        int age;
        float cgpa;

        printf("enter name : ");
        scanf("%s",name);
        printf("enter age");
        scanf("%d",&age);
        printf("enter cgpa");
        scanf("%f",&cgpa);

        fprintf(fptr,"Student name = %s\n",name);
        fprintf(fptr,"Student age = %d\n",age);
        fprintf(fptr,"Student cgpa = %f\n",cgpa);

        fclose(fptr);
        return 0;
    }
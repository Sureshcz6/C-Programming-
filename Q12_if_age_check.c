#include<stdio.h>
    int main()
    {
        int age;
        printf("Enter your age");
        scanf("%d",&age);
        if(age>18)
            {
                printf("He can vote");
            }
        else
            {
                printf("He Can't vote");
            }
        printf("\nThank you");
        return 0;
    }
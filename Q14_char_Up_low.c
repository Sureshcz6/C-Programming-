#include<stdio.h>
int main()
    {
        char User_char;
        printf("enter a Character: ");
        scanf("%c",&User_char);
        if(User_char>='a'&&User_char<='z')      //range 97-122
            {
                printf("Lowercase char %c ",User_char);
            }
        else if(User_char>='A'&&User_char<='Z')         //range(65-90)
            {
                printf("Uppercase char %c",User_char);
            }
        else{
            printf("Please Enter single Character\n");
            }
        return 0;
    }
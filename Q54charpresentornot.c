#include<stdio.h>

int main()
    {
        char str[100];char ch;int count=0,total=0;
        printf("Enter more sentences  ");
        fgets(str,100,stdin);
        printf("Please input check characters  : ");
        scanf("%c",&ch);
        for(int i=0;str[i]!='\0';i++)
            {
                if(str[i]==ch)
                    {
                        ++count;
                    }
                // else
                //     {
                //         printf("Check character are not Occupie in the sentences please try different characters");
                //     }
                ++total;
            }
        printf("Check character present  %d  time in given setences. \n",count);
        printf("Total character are %d =",total);
        
        return 0;
    }
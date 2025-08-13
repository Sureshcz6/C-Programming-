#include<stdio.h>
// #include<process.h>
// #include<stdlib.h>
int main()
    {
        int no;
        
        do
        {
            printf("Enter Number: ");
            scanf("%d",&no);
            printf("%d\n",no);
            if(no%2!=0)
                {
                    break;
                }
        } while (1);
        
        return 0;
    }    
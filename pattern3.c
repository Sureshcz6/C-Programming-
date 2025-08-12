#include<stdio.h>
#include<conio.h>                                                                                       //              *
int main()                                                                                             //              *  *                         
    {
        int i,row,n=1,p=1;
        printf("ENTER THE ODD NUMBER OF ROW ");
        scanf("%d",&row);
        int save=row/2+1;
        int save1=row/2;
        for(i=1;i<=save;i++)
            {
             for(int j=1;j<=save-i;j++)
                    {
                        printf(" ");
                    }
                        printf("*");
                            if(i!=1)
                                {
                                    for(int k=1;k<=2*n-1;k++)
                                        {
                                            printf(" ");
                                        }
                                    printf("*");
                                    n++;
                                }
                        printf("\n");
            }  
        int s=1;
        for(int i=save1;i>=1;i--)   
            {
                for(int j=1;j<=s;j++)
                    {
                        printf(" ");
                    }
                printf("*");
                if(i!=1)
                {
                for(int k=1;k<=2*(i-1)-1;k++)
                    {
                        printf(" ");
                    }
                printf("*");
                }
                s++;
                printf("\n");
            }
        return 0;
    }
#include<stdio.h>
int main()      // print piramid pattern using symbol #
    {
        int row,i,j,k,n=1;
        printf(" ENTER THE NUMBER OF ROW : ");
        scanf("%d",&row);
        for(i=1;i<row*2;i++)
            {
            if(i%2!=0)
            { 
                 for(int j=row*2-1;j>=i;j--)
                         {
                             printf(" ");
                         }
                        for(int k=1;k<=i;k++)
                            {
                                printf("# ");
                            }
                            printf("\n");
            }
        }

        return 0;
    }
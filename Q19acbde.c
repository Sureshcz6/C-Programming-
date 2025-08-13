#include<stdio.h>
int main()           // print AbCdEfGhI;
    {
        int row,i,j,save;
        printf("ENTER NUMBER HOW MANY CHARACTER WANT YOU PRINT: ");
        scanf(" %d",&row);
        for(i=0;i<row;i++)
            {
              for(j=0;j<=i;j++)
                {
                save=0;
                save=(32+65+j);
                if(save%2==0)
                    {
                        printf("%c ",save-32);
                    }
                else
                    {
                        printf("%c ",save);
                    }

              
            }            printf("\n");            }
        return 0;
    }
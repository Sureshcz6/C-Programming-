#include<stdio.h>
int main()
    {
        int array[2][3],i,j,sum;
        printf("ENTER ELEMENTS ON THE ARRAY: ");
        for(i=0;i<2;i++)
            {
                for(j=0;j<3;j++)
                    {
                        scanf("%d",&array[i][j]);
                    }
                printf("\n");
            }
        for(i=0;i<2;i++)
            {
                sum=0;
                printf("%d ROW OF SUM : ",i+1);
                for(j=0;j<3;j++)
                    {
                        printf("%d\t",array[i][j]);
                        sum+=array[i][j];
                    }
                printf("= %d\t",sum);
                printf("\n");
            }
        printf("\n");
        for(i=0;i<3;i++)
            {
                sum=0;
                printf("%d  COLUMN OF SUM : ",i+1);
                for(j=0;j<2;j++)
                    {
                        printf("%d\t",array[j][i]);
                        sum+=array[j][i];
                    }
                printf("= %d\t ",sum);
                printf("\n");
            }
        return 0;
    }
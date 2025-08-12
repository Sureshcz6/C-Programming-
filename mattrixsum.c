#include<stdio.h>
int main()
    {
        int array1[2][3],array2[2][3],Sumarray[2][3],i,j;
        printf("ENTER ELEMENTS : 12");
        for(i=0;i<2;i++)
            {
                for(j=0;j<3;j++)
                    {
                        scanf("%d",&array1[i][j]);
                        scanf("%d",&array2[i][j]);
                        Sumarray[i][j]=array1[i][j]+array2[i][j];
                    }
            }
        for(i=0;i<2;i++)
            {
                for(j=0;j<3;j++)
                    {
                        printf("%d\t",Sumarray[i][j]);
                    }
                printf("\n");
            }
        return 0;
    }
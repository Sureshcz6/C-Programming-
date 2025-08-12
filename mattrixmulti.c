#include<stdio.h>
int main()
    {
        int mattrix1[2][2],mattrix2[2][2],i,j;
        int Multimattrix[2][3],Sum=0,k;
        printf("FIRST MATTRIX IN ENTER 4 ELEMENTS : ");
        for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                    {
                        scanf("%d",&mattrix1[i][j]);
                    }
            }
        printf("\n SECOND MATTRIX OF ENTER 4 ELEMENTS : ");
        for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                    {
                        scanf("%d",&mattrix2[i][j]);
                    }
            }
        printf("\n");
        printf("MULTIPLICATION OF TWO MATTRIX : \n");
        for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                    {
                        Sum=0;
                        for(int k=0;k<2;k++)
                            {
                             Sum=Sum+(mattrix1[i][k]*mattrix2[k][j]);
                            }
                        Multimattrix[i][j]=Sum;
                    }   
            }
        printf("\nOUPUT OF MATTRIX : \n");
        for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                    {
                        printf("%d\t",Multimattrix[i][j]);
                    }

                printf("\n");
            }
        return 0;
    }
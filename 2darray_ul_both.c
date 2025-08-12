#include<stdio.h>
void table(int arr[][10],int n,int m, int num);
int main()
    {
        int m=10;
        int array[2][m];
        table(array,0,10,2);
        table(array,1,10,3); 
        
        for(int i=0;i<m;i++)
            {
                printf("%d\t",array[0][i]);
            }
            printf("\n");
        for(int i=0;i<m;i++)
            {
                printf("%d\t",array[1][i]);
            }
        return 0;
    }

void table(int arr[][10], int n, int m, int num)
    {
        for(int i=0;i<m;i++)
            {
                arr[n][i]=num*(i+1);
            } 
    }
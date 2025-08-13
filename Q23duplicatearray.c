#include<stdio.h>
#include<process.h>
#include<stdlib.h>
int main()
    {
        int size,array[100];
        printf("ENTER THE SIZE OF ARRAY : ");
        scanf("%d",&size);
        for(int i=0;i<size;i++)
            {
                scanf("%d",&array[i]);
                for(int j=0;j<i;j++)
                    {
                        if(array[i]==array[j])
                            {

                                printf("exiting the program.");
                                exit(0);
                           }
                    }     
          }
        return 0;

    }
#include<stdio.h>
int main()
    {
        int i=5;
        int *ptr=&i;
        int **pptr=&ptr;
        printf("%d\n",**pptr);
        // float price=100.00;
        // float *ptr=&price;
        // float **ptr=&ptr;
        return 0;
    }
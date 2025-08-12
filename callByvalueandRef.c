#include<stdio.h>
void square(int);
void _square(int*);
int main()
    {
        int Number=4;
        square(Number);
        printf("number = %d\n",Number);

        _square(&Number);
        printf("number= %d\n",Number);
        return 0;
    }
    //call by value
    void square(int n)
        {
            n=n*n;
            printf("Square = %d",n);
        }
    //call by reference
    void _square(int* n)
        {
            *n=(*n) * (*n);
            printf("square = %d\n",*n);
        }
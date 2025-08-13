#include<stdio.H>
void PrintH(int count);
int main()
    {
        PrintH(5);
        return 0;
    }

    void PrintH(int cou)
        {
            if(cou==0)
                {
                    return;
                }
            printf("Hello world.\n");
            PrintH(cou-1);   
        }
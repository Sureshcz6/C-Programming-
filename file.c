#include<stdio.h>
 int main()
    {
        FILE *fptr;
        fptr = fopen("Test.txt","r");   // open file with fopen()
        // fclose(fptr);   // close file with fclose()
        return 0;
    }
#include<stdio.h>
void oddfun(int arr[],int n);
int main()
    {
        int *count=0;
        int arr[]={1,2,3,4,5,6};
        // int n;
        // printf("Enter the size of array: ");
        // scanf("%d",&n);
        oddfun(arr,6);
        printf("\nCount of odd Numbers :  &d",*count);
        return 0;
    }
   void oddfun(int ptr[],int size)
            {
                int count=0;
                for(int i=0;i<size;i++)
                    {
                        // scanf("Input %d\n",ptr[i]);
                        if(ptr[i]%2!=0)
                            {
                                ++count;
                            }
                    }
                printf("count odd Num = %d",count);
            }
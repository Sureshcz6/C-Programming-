#include<stdio.h>
void reverse(int arr[],int n);
void printarr(int aar[], int n);
int main()
    {
        int arr[]={1,2,3,4,5,6,7,8};
        int sz=8;
       
        reverse(arr,sz);
        printarr(arr,sz);
        return 0;
    }
// //traverseal array or original array
void reverse(int arr[],int n)
    {
        for(int i=0;i<n/2;i++)
            {
                int firstval=arr[i];
                int secondval=arr[n-i-1];
                arr[i]=secondval;
                arr[n-i-1]=firstval; 
            }
    }     
void printarr(int arr[],int n)
    {
        for(int i=0;i<n;i++)
            {
                printf("%d\t",arr[i]);
            }
    }
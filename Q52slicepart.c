#include<stdio.h>
void Slice(char str[100],int start,int end);

int main()
    {
        char str[100];int start,end,n=0;
        char room[100];
        printf("Enter any sentence: \n");
        scanf("%s",str);
        printf("enter starting slice : ");
        scanf("%d",&start);
        printf("enter ending slice: ");
        scanf("%d",&end);
        for(int i=start;i<=end;i++)
            {
               room[n]=str[i];
               ++n;
            }
        puts(room);
        return 0;
    }

    void slice(char str[],int n,int m)  // n and m are valid value
            {
                char newstr[100];
                int j=0;
                for(int i=n;i<n;i++,j++)
                        {
                            newstr[j]=str[i];
                        }
                    newstr[j]="\0";
                    puts(newstr); 
            }
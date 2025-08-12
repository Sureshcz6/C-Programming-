#include<stdio.h>
void Fibo(int);
int main() 
    {
        int range;
        printf("Enter Number of range:  ");
        scanf("%d",&range);
        Fibo(range);
        return 0;
    }

    void Fibo(int Num)
     {

   int a=0,b=1,save;
                  
                 if(Num==0)
                        {
                            printf("%d\t",Num);
                        
                        }
                 else if(Num==1||Num==2)
                        {
                            printf("%d\t",1);
                        
                        }   
                else
                {
                  for(int i=1;i<=Num-2;i++)
                       {                                                 //for nth term ==  its conditi0n   
                            //    printf("%d\t",a);           //otherwise n term condtion follow 
                            //    printf("%d\t",b);                   
                               save=a+b;
                               a=b;
                               b=save;
                  
                         }
                    printf("Fibonacci Number nth term is = %d\t",save);
                }

        }
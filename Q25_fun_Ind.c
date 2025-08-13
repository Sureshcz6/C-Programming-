#include<stdio.h>
void country(char);
    int main()
        {
            char ask;
            printf("Entry contry's ask traditional  ");
            printf("\n Indian for N : \n French for B: ");
            scanf("%c",&ask);
            country(ask);
            return 0;
        }
    
    void country(char dj)
        {
            if(dj=='n'||dj=='N')
                {
                    printf("Namaste Indian ");
                }
            else if(dj=='B'||dj=='b')
                {
                    printf("Bonjour French ");
                }
            else{
                printf("wrong input from given options: ");
            }
        }
#include<stdio.h>
int main()      //weak shedule q12
    {
        char choose;
        printf("WEEK SCHEDULE DAYS FIND: ");
        printf("M= monday,T=tuesday, W= wedneday, H= thusday, F=friday, S=SATURDAY,U= sunday  \n");
        scanf("%c",&choose);
        switch(choose)
            {
                case 'M': printf("STARTED ON THE SCHOOL DAY SCHEDULE");
                        break;
                case 'T': printf("GO TEMPLE ");
                          printf("visit acient place");
                          break;
                case 'W': printf("GO MARKET");
                          printf("GO SOME PEOPLE MEET ") ;
                          break;
                case 'H': printf("GO OFFICE");
                            break;
                case 'F': printf("Go daiya workout and gym");
                            break;
                case 'S': printf("go help and do some special work");
                            break;
                case 'U': printf("On this day totall");
                            break;
                default: printf(" WRONG INPUT NUMBER ");
                            break;
            }
        return 0;
    }
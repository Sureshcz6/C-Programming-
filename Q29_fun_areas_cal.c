#include<stdio.h>
// int calarea(int);
int square(int);
float circle(int);
void rectangle();
int main()
    {
        int area,ret;
        printf("enter area calculate for: ");
        scanf("%d\n",&area);
        ret=square(area);
        printf("Area of Square: %d\n",ret);
        ret=circle(area);
        printf("area of circle: %d\n",ret);
        rectangle();

        return 0;
    }

    int square(int square)
        {
            return(square*square);
        }
    float circle(int circle)
        {
            return(3.14*circle*circle);
        }
    void rectangle()
                {
                    int len,ben;
                    printf("enter length of rectangel: ");
                    scanf("%d\n",&len);
                    printf("enter bright of rectangle: ");
                    scanf("%d\n",&ben);
                    int value=len*ben;
                    printf("\nThe area of rectangle : %d",value);
                }


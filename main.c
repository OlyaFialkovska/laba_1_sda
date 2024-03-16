#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("x = ");
    scanf("%f",&x);
    if((x > -30) && (x <= -15) || (x > 3) && (x <= 20))//+
    {
        printf("undefined");
    }
    else//-
    {
        if ( (x <= 3) && (x > -15) )//+
        {
            y = (4*x*x+2);
            printf("y = %f", y);
        }
        else//-
        {
            y = (3*x*x*x)/4-5;
            printf("y = %f", y);
        }
        return 0;
    }
}

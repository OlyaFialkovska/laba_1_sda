#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float e = 2.719;
    float pi = 3.142;
    float a,a1,a2,b,b1,b2;     //for example
    float x,y,z;     // for scan int x.y.z
    printf("x =");
    scanf("%f",&x);
    printf("\ny =");
    scanf("%f",&y);
    printf("\nz =");
    scanf("%f",&z);
    //a
    a1 = 1 + ( 4 / (exp((x + y)* log(e)) * exp(( - x - y)* log(e))));
    a2 = fabs( x - (2 * y) / (1-x*x*y*y));
    a = a1 / a2 ;
    //example a

    if ( a2 != 0 )
    {
        if ( (1-x*x*y*y) != 0 )
        {
            printf( "\na = %f", a);
        }
        else
        {
            printf("\nrule about division by zero");
        }
    }
    else
    {
        printf( "\nrule about division by zero" );
    }
    //b
    b1 = exp( fabs(( x - y )) * log(e));
    b2 = exp ( x + log( tan(z) * tan(z) - 1));
    b = b1 * b2; // example b
    if( z != pi/4 )
    {
        if( z != -pi/4 )
        {
            if ( log( tan(z) * tan(z) - 1) > 0)
            {
                printf( "\nb = %f", b );
            }
            else
            {
                printf("\nThe argument of the logarithm cannot be less than 0");
            }
        }
        else
        {
            printf("\nDoes not belong to the definition area");
        }
    }
    else
    {
        printf("\nDoes not belong to the definition area");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //out constants
    float e = 2.719, pi = 3.1415;
    // out variable
    float a,b;
    //out scan
    float x,y,z;
    printf("x =");
    scanf("%f",&x);
    printf("\ny =");
    scanf("%f",&y);
    printf("\nz =");
    scanf("%f",&z);
    ///////////////////////////////////////a
    if ( (1-x*x*y*y) == 0 )
    {
        printf("\nRule about division by zero1");
    }
    else// (1-x*x*y*y) != 0;
    {
        if ( fabs( x - (2 * y) / (1-x*x*y*y)) == 0 )
        {
            printf( "\nRule about division by zero2" );
        }
        else//  fabs( x - (2 * y) / (1-x*x*y*y)) != 0;
        {
            a = (1 + sinh(x+y)*sinh(x+y)) / (fabs( x - (2 * y) / (1-x*x*y*y)) );
            printf( "\na = %f", a);
        }
    }
    ///////////////////////////////////////b
    /*
    if( z == 90)
    {
        printf("\ntg does not exist");
    }
    else if ( z == -90)
    {
        printf("\ntg does not exist");
    }
    else if ( z == 270)
    {
        printf("\ntg does not exist");
    }
    else if ( z == -270)
    {
        printf("\ntg does not exist");
    }
    else
    {
        if ( ( tan(z*pi/180) * tan(z*pi/180)  - 1) <= 0) // ln(x) <= 0;
        {
            printf( "\nThe argument of the logarithm cannot be less or equal 0");
        }
        else // ln(x) <= 0;
        {
            b = ( exp( fabs(( x - y )) * log(e)) ) * ( exp ( x * log( tan(z*pi/180) * tan(z*pi/180) - 1)) );
            printf( "\nb = %f", b );
        }
    }*/
    b = exp((x) * log(fabs(tan(z)*tan(z) - 1)));
    if(x < 0){
        if(tan(z)*tan(z) - 1 == 0){
            printf("\nb: errorr");
        }
        else {
            if (tan(z)*tan(z) - 1 < 0) {
                b = -b;
                b = exp(fabs(x - y)) * b;
            } else {
                b = exp(fabs(x - y)) * b;
            }
            printf("\nb: %f", b);
        }
    }
    else {
        if (tan(z)*tan(z) - 1 < 0) {
            b = -b;
            b = exp(fabs(x - y)) * b;
        } else {
            b = exp(fabs(x - y)) * b;
        }
        printf("\nb: %f", b);
    }
    return 0;
}

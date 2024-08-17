/*
    The_sine
        hniman 
        Aug. 14, 2024
*/

#include <stdio.h>
#include "math.h"
int main()
{
    double x, sine;
    printf ("Enter a value for x (0 <= x <= 1): \n");
    scanf("%lf", &x);
    sine = sin(x);
    printf ("The sine of %lf is %.4lf\n", x, sine);
}
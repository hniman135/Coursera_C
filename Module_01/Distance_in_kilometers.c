/*
    Distance_in_kilometers
        hniman 
        Aug. 5, 2024
*/
#include <stdio.h>

int main()
{
    int miles = 0 , yards = 0 ;
    double kilometers = 0.0;

    printf ("Enter miles: ");
    scanf("%d", &miles);
    printf ("Enter yards: ");
    scanf("%d", &yards);
    kilometers = 1.609 * (miles + (double)(yards / 1760.0));
    printf("Result in kilometers: %lf", kilometers);
    return 0;
}
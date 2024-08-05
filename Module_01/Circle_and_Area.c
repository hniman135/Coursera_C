/*
    Circle_and_Area
        hniman 
        Aug. 3, 2024
*/
#include <stdio.h>

#define PI 3.14

int main()
{
    double area = 0.0, radius = 0.0;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("With %lf meters radius, the area equal %lf sq. meters.\n", radius, area);
    return 0;
}
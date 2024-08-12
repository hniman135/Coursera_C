/*
    Volume_of_sphere
        hniman 
        Aug. 12, 2024
*/

#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
 double radius;
 printf("Enter radius:");
 scanf("%lf", &radius);
printf("volume is : %lf \n\n", 4*PI*radius*radius*radius/3 );
return 0;
}
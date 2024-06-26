#include<stdio.h>
int main()
{
    float cm,meter,km;
    printf("Enter length in centimeter: ");
    scanf("%f",&cm);
    meter=cm/100;
    km=meter/1000;

    printf("Length is in meter: %.3f\nLength in kilometer is: %.3f",meter,km);
    return 0;
}

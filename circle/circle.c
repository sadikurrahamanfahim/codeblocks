#include<stdio.h>
void main()
{
    float r,d,c,a,pie=3.14;
    printf("enter radius=");
    scanf("%f",&r);
    d=2*r;
    c=2*pie*r;
    a=pie*r*r;
    printf("diameter is%.3f\n circumference is%.3f\n area is%.3f\n",d,c,a);
}

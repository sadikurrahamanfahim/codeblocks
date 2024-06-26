#include<stdio.h>
int main()
{
    int area,height,width;
    printf("Enter height: ");
    scanf("%d",&height);
    printf("Enter width: ");
    scanf("%d",&width);
    area=height*width;

    printf("Area of rectangle is: %d", area);
    return 0;
}

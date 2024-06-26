#include <stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Enter Celsius: ");
    scanf("%f",&celsius);

    fahrenheit=(1.8*celsius)+32;
    printf("Fahrenheit is: %f",fahrenheit);
    return 0;
}

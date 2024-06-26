#include <stdio.h>
int main()
{
    char operator;
    float num1,num2;
    printf("Enter an operator: ");
    scanf("%c",&operator);

    printf("Enter two number: ");
    scanf("%f %f",&num1, &num2);

    switch(operator)
    {
    case '+':
        printf("answer:%f",num1+num2);
        break;
    case '-':
        printf("answer:%f",num1-num2);
        break;
    case '*':
        printf("answer:%f",num1*num2);
        break;
    case '/':
        printf("answer:%f",num1/num2);
        break;
    default:
        printf("Error!");
    }
    return 0;
}

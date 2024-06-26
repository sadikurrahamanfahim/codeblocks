#include<stdio.h>

void swap(int *a, int *b){

int temp = *a;

*a = *b;

*b = *a;

}

int main(){

int a = 3, b = 5;

printf("values before function call:\n");

printf("a = %d b =%d",a, b);

swap(&a,&b);

printf("values after function call:\n");

printf("a = %d b = %d",a, b);

return 0;

}

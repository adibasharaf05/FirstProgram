#include<stdio.h>
int main()
{
int a = 5;
int b = 10;
int temp;

printf("Enter two integers: ");
scanf("%d %d", &a, &b);

printf("\nBefore swapping: a = %d, b = %d ", a, b);

temp = a;
a = b;
b = temp;

printf("After swapping: a = %d, b = %d", a, b);

return 0;



}
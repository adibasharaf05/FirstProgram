#include<stdio.h>
int main()
{
 float num1, num2, difference;
 printf("Enter two numbers: ");
 scanf("%f %f", &num1, &num2);
 difference = num1 - num2;
 printf("Difference = %.2f", difference);
 return 0;   
}
#include<stdio.h>
int main()
{
float celcius, fahrenheit;
printf("Enter temperature in Fahrenheit: ");
scanf("%f", &fahrenheit);

celcius = (fahrenheit - 32) * 5.0 / 9.0;
printf("%.2f Fahrenheit = %.2f Celcius", fahrenheit, celcius);

return 0;



}
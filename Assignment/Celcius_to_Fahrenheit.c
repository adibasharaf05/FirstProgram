#include<stdio.h>
int main()
{
float celcius, fahrenheit;
printf("Enter temperature in celcius: ");
scanf("%f", &celcius);

fahrenheit = (celcius * 9.0 / 5.0) + 32;

printf("%.2f Celcius = %.2f Fahrenheit", celcius, fahrenheit);
return 0;




}
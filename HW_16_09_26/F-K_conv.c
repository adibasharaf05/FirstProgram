#include<stdio.h>
int main()
{
  float farenheit, kelvin;
  printf("Enter temperature in Farenheit: ");
  scanf("%f", &farenheit);

  kelvin = ((farenheit - 32) * 5.0 / 9.0) + 273.15;
  printf("%.2f Farenheit = %.2f Kelvin", farenheit, kelvin);

  return 0;


}

#include<stdio.h>
int main()
{
  float celsius, kelvin;
  printf("Enter temperature in Celsius: ");
  scanf("%f", &celsius);

  kelvin = celsius + 273.15;
  printf("%.2f Celsius = %.2f Kelvin", celsius, kelvin);

  return 0;


}

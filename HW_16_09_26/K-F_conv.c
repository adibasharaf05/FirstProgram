#include<stdio.h>
int main()
{
  float kelvin, farenheit;
  printf("Enter temperature in Kelvin: ");
  scanf("%f", &kelvin);

  farenheit = ((kelvin - 273.15) * 9.0 / 5.0) + 32;
  printf("%.2f Kelvin = %.2f Farenheit\n", kelvin, farenheit);

  return 0;

}

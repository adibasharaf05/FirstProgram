#include<stdio.h>
int main(){
float celsius, farenheit;

printf("Enter temperature in Celsius: ");
scanf("%f", &celsius);

farenheit = (celsius * 9.0 / 5.0) + 32;
printf ("%.2f Celsius = %.2f Farenheit\n",celsius, farenheit );

return 0;
}

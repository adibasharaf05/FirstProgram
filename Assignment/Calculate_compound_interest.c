#include<stdio.h>
#include<math.h>
int main()
{
double principle, rate, time, amount, compound_interest;
printf("Enter Principle, Rate of interest (%%), and Time ");
scanf("%lf %lf %lf", &principle, &rate, &time);

amount = principle * pow((1 + rate / 100), time);
compound_interest = amount - principle;
printf("Compound_interest = %.2lf", compound_interest);
printf("Total amount = %.2lf", amount);

return 0;


}
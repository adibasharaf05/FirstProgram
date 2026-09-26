#include<stdio.h>
int main()
{
float principle, rate, time, simple_interest;
printf("Enter Principle, Rate of interest (%%), and Time (years): ");
scanf("%f %f %f", &principle, &rate, &time);

simple_interest = (principle * rate * time) / 100;
printf("Simple_interest = %.2f", simple_interest);
return 0;





}
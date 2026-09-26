#include<stdio.h>
int main()
{
float basic, hra, da, gross;
printf("Enter basic salary: ");
scanf("%f", &basic);
//Assuming HRA = 20% of basic, DA = 50% of basic;
hra = 0.20 * basic;
da = 0.50 * basic;
gross = basic + hra + da;
printf("HRA (20%%): %.2f", hra);
printf("DA (50%%): %.2f", da);
printf("Gross salary: %.2f", gross);
return 0;


}
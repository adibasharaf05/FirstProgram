#include<stdio.h>
int main()
{
int total_days, years, months, days;
printf("Enter total_days: ");
scanf("%d", &total_days);

years = total_days / 365;
months = (total_days % 365) / 30;
days = (total_days % 365) % 30;

printf("%d days = %d years, %d months, %d days",total_days, years, months, days);
return 0;




}
#include<stdio.h>
int main()
{
float s1, s2, s3, s4, s5, total, percentage;
printf("Enter the marks of five subjects (out of 100 each): ");
scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

total = s1 + s2 + s3 + s4 + s5;
percentage = (total / 500.0) * 100;

printf("Total marks = %.2f / 500", total);
printf("Percentage = %.2f%% ", percentage);
return 0;



}
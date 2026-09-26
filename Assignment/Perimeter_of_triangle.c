#include<stdio.h>
int main()
{
float lenght, width, perimeter;

printf("Enter lenght and width: ");
scanf("%f %f", &lenght, &width);

perimeter = 2 * (lenght + width);
printf(" Perimeter = %.2f", perimeter);
return 0;



}
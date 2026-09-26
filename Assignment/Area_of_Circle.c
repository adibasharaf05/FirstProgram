#include<stdio.h>
int main()
{
float area, radius;
const float PI = 3.1456;
printf("Enter radius of the circle: ");
scanf("%f", &radius);
 area = PI * radius * radius;

 printf("Area of Cirlce = %.2f", area); 
 return 0;


}
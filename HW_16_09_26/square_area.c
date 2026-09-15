#include<stdio.h>
int main()
{
  float side, area;
  printf("Enter the length of a side of a square: ");
  scanf("%f", &side);

  area = side * side;
  printf("Area of the Square = %.2f\n", area);

  return 0;


}

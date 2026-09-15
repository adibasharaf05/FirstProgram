 #include<stdio.h>
int main()
{
  float length, width, perimeter;
  printf("Enter the length and width of the rectangle: ");
  scanf("%f,%f", &length, &width);

  perimeter = 2 * (length + width);

  printf("Perimeter of the rectangle = %.2f\n", perimeter);

  return 0;

}

#include<stdio.h>
int main(){
float side1, side2, side3;
printf("Enter three sides: ");
scanf("%f %f %f", &side1, &side2, &side3);
if (side1 == side2 && side2 == side3){
    ("The triangle is equilateral");
} else if (side1 == side2 || side2 == side3 || side2 == side3){
    printf("The triangle is isosceles");
} else{
    printf("the traingle is scalene");
}
return 0;


}

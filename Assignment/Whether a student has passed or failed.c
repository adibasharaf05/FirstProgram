#include<stdio.h>
int main()
{
 float marks;
 printf("enter marks (0-100): ");
 scanf("%f", &marks);
 if (marks >= 40){
    printf("Result: Passed");
 } else {
   printf("Result : failed");
 }
 return 0;   
}
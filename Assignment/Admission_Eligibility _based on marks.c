#include<stdio.h>
int main()
{
 float math, physics, chemistry, total, total_mp;
 printf("Enter marks for math, physics and chemistry: ");
 scanf("%f %f %f", &math, &physics, &chemistry);
 
 total = math + physics + chemistry;
 total_mp = math + physics;

 if (math >= 65 && physics >= 55 && chemistry >= 50 && total >= 190 || (total_mp >= 140)) {
     printf("Eligible for admission"); 
 } else {
    printf("Not eligible for admission");
 }
 return 0;
}
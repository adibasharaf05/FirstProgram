#include<stdio.h>
int main()
{
 float units, bill;   
printf("Enter total electricity units consumed: ");
scanf("%f", &units);

if(units <= 100){
    bill = units * 1.50;
} else if (units <= 200){
    bill = (100 * 1.50) + ((units - 100) * 2.50);
} else {
    bill = (100 * 1.50) + (100 * 2.50) + ((units - 200) * 3.50);
}
printf("Total electricity bill = $%.2f ", bill);
return 0;

}
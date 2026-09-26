#include<stdio.h>
int main()
{
float marks;
printf("Enter student marks (0-100): ");
scanf("%f", &marks);
if (marks >= 80){
    printf("Grade A+");
} else if ( marks >= 70){
    printf("Grade A");
} else if (marks >= 60){
    printf("Grade B");
} else if (marks >= 50){
    printf("Grade C");
} else if (marks >= 40){
    printf("Grade d");
} else {
    printf("Grade F");
}
return 0;
}
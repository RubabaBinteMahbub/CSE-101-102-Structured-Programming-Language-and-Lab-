#include<stdio.h>
int main()
{
float x,y;
  
printf("Enter the value of x : ");
scanf("%f",&x);
  
printf("Enter the value of y : ");
scanf("%f",&y);

float *ptr1=&x,*ptr2=&y;

printf("\nSum = %.2f",*ptr1+*ptr2);
printf("\nSub = %.2f",*ptr1-*ptr2);
printf("\nMultiplication = %.2f",*ptr1**ptr2);
printf("\nDivision = %.2f",*ptr1 / *ptr2); // মাঝে স্পেস দিবে।

return 0;
}

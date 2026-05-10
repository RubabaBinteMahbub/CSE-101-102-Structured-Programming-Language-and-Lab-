#include<stdio.h>
int main()
{
float x,y;
  
printf("Enter the value of x : ");
scanf("%f",&x);
  
printf("Enter the value of y : ");
scanf("%f",&y);

float *ptr1=&x,*ptr2=&y;

float sum=(*ptr1)+(*ptr2);
float sub=(*ptr1)-(*ptr2);
float multl=(*ptr1)*(*ptr2);
float div=(*ptr1)/(*ptr2);

printf("\nSum = %.2f",sum);
printf("\nSub = %.2f",sub);
printf("\nMultiplication = %.2f",multl);
printf("\nDivision = %.2f",div);

return 0;
}

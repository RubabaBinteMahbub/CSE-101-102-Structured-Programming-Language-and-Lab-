#include<stdio.h>
int main()
{
float x;
printf("Enter the value of x : ");
scanf("%f",&x);

float *ptr=&x;

printf("\nValue of x : %.2f",x);
printf("\nValue of x : %.2f",*ptr);

printf("\nAddress of x variable : %p",&x);
printf("\nAddress of x variable : %p",ptr);
  
return 0;
}

#include<stdio.h>
int main()
{
int array[5], rev_array[5], i;
  
printf("Enter 5 elements of the array :");
for(i=0;i<5;i++){
   scanf("%d",&array[i]);
}
  
printf("Reversed array = ");
for(i=0;i<5;i++){
   rev_array[i]=array[4-i];
   printf("%d",rev_array[i]);
}
  
return 0;
}

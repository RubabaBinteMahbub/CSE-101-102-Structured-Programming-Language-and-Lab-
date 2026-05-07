#include<stdio.h>

int main()
{
int a[5],i,cpy_array[5];
  
printf("Enter 5 elements of the array :");
for(i=0;i<5;i++){
  scanf("%d",&a[i]);
}
  
printf("Elements of the copied array = \n");
for(i=0;i<5;i++){
  cpy_array[i]=a[i];
  printf(" %d",cpy_array[i]);
}
  
return 0;
}

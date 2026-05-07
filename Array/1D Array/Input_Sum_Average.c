#include<stdio.h>
int main()
{
int size,i;
  
printf("Enter size : ");
scanf("%d",&size);
  
int a[size];
  
float sum=0,avg;
  
printf("Enter elements : ");
for(i=0; i<size;i++){
  scanf("%d",&a[i]);
  sum+=a[i];
}
  
printf("\nSum = %.2f\n",sum);
  
avg=sum/size;
printf("Average = %.2f\n",avg);

return 0;
}

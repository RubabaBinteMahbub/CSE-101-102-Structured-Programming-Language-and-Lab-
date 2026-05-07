#include<stdio.h>
int main()
{
int size,i;
  
printf("Enter size : ");
scanf("%d",&size);
  
int a[size];
  
printf("Enter elements : ");
for(i=0; i<size;i++){
  scanf("%d",&a[i]);
}

int max=a[0];
for(i=0;i<size;i++){
  if(a[i]>max){
    max=a[i];
  }
}
  
printf("Maximum value = %d\n",max);

return 0;
}

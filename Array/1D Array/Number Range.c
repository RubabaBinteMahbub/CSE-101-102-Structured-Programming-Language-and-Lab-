#include<stdio.h>

int main()
{
int n;
printf("Enter number of students : ");
scanf("%d",&n);
  
int a[n],min,max;
  
printf("Enter %d marks : ",n);
for(int i=0;i<n;i++){
  scanf("%d",&a[i]);
}
  
min=max=a[0];
for(int i=0;i<n;i++){
  if(a[i]<min) min=a[i];
  else if(a[i]>max) max=a[i];
}
  
printf("Mark range : %d-%d",min,max);
  
return 0;
}

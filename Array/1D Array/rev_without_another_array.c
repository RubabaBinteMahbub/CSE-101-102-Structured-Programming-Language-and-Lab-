#include<stdio.h>

int main()
{
int a[5],i,temp;
  
printf("Enter elements : \n");
for(i=0;i<5;i++){
  scanf("%d",&a[i]);
}

for(i=0;i<5/2;i++){
  temp=a[i];
  a[i]=a[5-i-1];
  a[5-i-1]=temp;
}

printf("Reversed array : \n");
for(i=0;i<5;i++){
  printf(" %d",a[i]);
}
  
return 0;
}

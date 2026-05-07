#include<stdio.h>
int main()
{
int a[5],i,count1=0,count2=0;
  
printf("Enter 5 elements of the array :");
for(i=0;i<5;i++){
  scanf("%d",&a[i]);
}
  
for(i=0;i<5;i++){
  if(a[i]%2==0){
    count1++;
  }
  else{
    count2++;
  }
}
  
printf("Number of even number = %d\n",count1);
printf("Number of odd number = %d\n",count2);
  
return 0;
}

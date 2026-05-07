#include<stdio.h>
int main()
{
int n, i, num, found=0;

printf("Enter the size of array :");
scanf("%d",&n);

int a[n];

printf("Enter the numbers of the array :");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
}
  
printf("Enter element to search :");
scanf("%d",&num);

for(i=0;i<n;i++){
   if(a[i]==num){
    found=1;
    printf("%d is found at index %d and position %d.",num,i,i+1);
   }
}
  
if(found!=1){
   printf("%d is not found.",num);
}
    
return 0;
}

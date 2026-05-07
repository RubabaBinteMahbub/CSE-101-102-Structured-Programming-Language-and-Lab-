#include<stdio.h>

int main()
{
   int size, num, pos;
  
   printf("Enter size = ");
   scanf("%d",&size);
  
   int a[size],i;
  
   printf("Enter elements :");
   for(i=0;i<size;i++){
      scanf("%d",&a[i]);
   }
  
   printf("Enter the number = ");
   scanf("%d",&num);
  
   printf("Enter the position = ");
   scanf("%d",&pos);

   // Inserting new number
   for(i=size-1;i>=pos-1;i--){
      a[i+1]=a[i];
   }
   a[pos-1]=num;
   size++;
   
   printf("Updated array : ");
   for(i=0;i<size;i++){
       printf(" %d",a[i]);
   }
    
   return 0;
}

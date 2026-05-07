#include<stdio.h>
int main()
{
   int size,pos;
  
   printf("Enter size = ");
   scanf("%d",&size);
  
   int a[size],i;
  
   printf("Enter elements :");
   for(i=0;i<size;i++){
      scanf("%d",&a[i]);
   }
   
   printf("Enter the position = ");
   scanf("%d",&pos);

   // Deleting element
   for(i=pos-1;i<=size-1;i++){
      a[i]=a[i+1];
   }
   size--;
   
   printf("Updated array : ");
   for(i=0;i<size;i++){
       printf(" %d",a[i]);
   }
    
   return 0;
}

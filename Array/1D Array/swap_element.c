#include<stdio.h>
int main()
{
   int array[5], i, temp;
  
   printf("Enter 5 elements of the array :");
   for(i=0;i<5;i++){
     scanf("%d",&array[i]);
    }
  
   temp=array[0];
   array[0]=array[4];
   array[4]=temp;
    
   printf("Changed array =");
   for(i=0;i<5;i++){
     printf(" %d",array[i]);
   }
   
   return 0;
}

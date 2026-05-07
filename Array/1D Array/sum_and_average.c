#include<stdio.h>
int main()
{
    int a[10], sum=0;
  
    printf("Enter the elements of the array :\n");
    for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
    }
  
    for(int i=0;i<10;i++){
    sum+=a[i];
    }
   
    printf("Sum of the elements of the array = %d\n",sum);
  
    printf("Average of the elements of the array = %d\n",sum/10);
  
    return 0;
}

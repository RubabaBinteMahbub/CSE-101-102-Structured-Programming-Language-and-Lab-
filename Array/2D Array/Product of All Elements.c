#include<stdio.h>

int main()
{
    int s;
    printf("Enter the size : ");
    scanf("%d",&size);
  
    int a[size], i, j,product=1;
  
    printf("Enter array elements: ");
    for(i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }
  
    for(i = 0; i < size; i++){
       if(a[i]%2==0 && a[i]%4!=0) 
           product*=a[i];
    }
  
    printf("Product = %d",product);
  
    return 0;
}

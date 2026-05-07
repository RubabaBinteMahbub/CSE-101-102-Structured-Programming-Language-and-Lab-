#include<stdio.h>
int main()
{
    int a[10],i;
  
    printf("Enter the elements of the     array :\n");
    for(i=0;i<10;i++){
       scanf("%d",&a[i]);
    }
  
    printf("Print the elements :");
    for(i=0;i<10;i++){
       printf(" %d",a[i]);
    }
  
    return 0;
}

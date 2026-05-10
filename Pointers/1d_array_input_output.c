#include<stdio.h>
int main()
{
    int size;
  
    printf("Enter size : ");
    scanf("%d",&size);
  
    int arr[size];
    int *ptr=arr;
  
    printf("Enter the elements : ");
    for(int i=0;i<size;i++){
        scanf("%d",(ptr+i)); //অ্যারের পয়েন্টারে কোথাও & লাগেনা।	
    }
  
    printf("The elements are ");
    for(int i=0;i<size;i++){
        printf("%d ",*(ptr+i));
    }
    
    return 0;
}

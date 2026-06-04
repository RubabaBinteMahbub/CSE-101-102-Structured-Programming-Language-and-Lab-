#include<stdio.h>
void InputArray(int n,int arr[]){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void rev_array(int n,int arr[]){
     for(int i=0;i<n/2;i++){
         int temp=arr[i];
         arr[i]=arr[n-i-1];
         arr[n-i-1]=temp;
     }
    printf("Reversed array, ");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
  
    int a[n];
  
    InputArray(n,a);
    rev_array(n,a);
   
    return 0;
}

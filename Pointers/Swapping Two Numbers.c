#include<stdio.h>

void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
  printf("After swapping : %d and %d",*a,*b);
}

int main(){
    int x, y;
  
    printf("Enter x and y : ");
    scanf("%d%d",&x,&y);
  
    swap(&x,&y);
    
    return 0;
}

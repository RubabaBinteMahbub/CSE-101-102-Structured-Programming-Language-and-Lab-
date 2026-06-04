#include<stdio.h>

void array(int n,int arr[n][n]){
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
        scanf("%d",&arr[row][col]);
        }
    }
}

void product(int n,int a[n][n],int b[n][n],int c[n][n]){
    printf("Product :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          c[i][j]=0;
          for(int k=0;k<n;k++){
          c[i][j]+=a[i][k]*b[k][j];
          }
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

int main(){
   int size,row,col,sum,i;
  
   printf("Enter size : ");
   scanf("%d",&size);

   int a[size][size],b[size][size],c[size][size];
  
   printf("\nEnter first matrix: \n");
   array(size,a);
  
   printf("\nEnter second matrix: \n");
   array(size,b);
  
   product(size,a,b,c);
   return 0;
}

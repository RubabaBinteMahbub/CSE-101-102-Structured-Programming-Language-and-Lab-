#include <stdio.h>
int main(){
  int size,i,j;
  printf("Enter size : ");
  scanf("%d",&size);
  int a[size][size];
  float sum=0;
  
  printf("Enter a : \n");
  for(i=0;i<size;i++){
      for(j=0;j<size;j++){
          scanf("%d",&a[i][j]);
          sum+=a[i][j];
      }
  }
 
  printf("\nSum of a : %.2f",sum);
  printf("\nAverage of a : %.2f",sum/(size*size)); // or int sum/(float)(size*size);
  
  return 0;
}

#include<stdio.h>
int main(){
printf("Enter the size : ");
scanf("%d",&size);

int a[size][size], b[size][size], sum[size][size];
  
printf("Enter matrix a :\n");
for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&a[i][j]);
		}
}
  
printf("Enter matrix b :\n");
for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&b[i][j]);
		}
}
  
printf("Sum of matrix a and b :\n");
for(i=0;i<size;i++){
	for(j=0;j<size;j++){
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d ",sum[i][j]);
	}
printf("\n");
}

return 0;
}

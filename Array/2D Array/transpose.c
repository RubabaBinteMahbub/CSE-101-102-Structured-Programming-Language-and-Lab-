#include<stdio.h>
int main()
{
printf("Enter the size : ");
scanf("%d",&size);

int a[size][size], t[size][size];
  
printf("Enter matrix a :\n");
for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&a[i][j]);
		}
}
  
printf("Transpose matrix of a :\n");
for(i=0;i<size;i++){
	for(j=0;j<size;j++){
			t[i][j]=a[j][i];
			printf("%d ",t[i][j]);
	}
printf("\n");
}

return 0;
}

#include <stdio.h>

int main()
{
int A[3][3],num;
  
printf("Input elements of matrix A :\n");
for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
		   scanf("%d", &A[i][j]);
    }
}
  
printf("Input multiplier :  ");
scanf("%d",&num);
  
for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
		   printf("%d ",num*a[i]);
    }
}
  
return 0;
}

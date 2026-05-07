#include <stdio.h>
int main()
{
  int n;
  printf("Enter the size of the matrices : ");
  scanf("%d", &n);
  
	int A[n][n], B[n][n];

printf("Enter elements of matrix A:\n");
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }
  
printf("Enter elements of matrix B:\n");
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
          scanf("%d", &B[i][j]);
      }
    }

// Checking equality
  int equal = 1;
  
  for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(A[i][j] != B[i][j]) {
                equal = 0;
                break;
            }
        }
    
        if(equal == 0) break;
  }
  
if(equal==1) printf("Both matrices are equal.\n");
else printf("Matrices are not equal.\n");
  
return 0;
}

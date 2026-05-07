#include<stdio.h>

int main()
{
    int i, n=5,sum=0;
  
    printf("Numbers from 1 to %d = ",n);
  
    for(i=1; i<=n;i++){
        printf(" %d",i);
        sum+=i;
    }
  
    printf("\nSum = %d\n",sum);
  
    return 0;
}

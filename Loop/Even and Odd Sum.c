#include<stdio.h>
int main()
{
    int i, n=5, even_sum=0, odd_sum=0;
  
    printf("Even numbers from 1 to %d = ",n);
    for(i=1;i<=n;i++){
          if(i%2==0){
              printf(" %d",i);
              even_sum+=i;
          }
    }
    printf("\nSum of even numbers = %d\n",even_sum);
    
    
    printf("Odd numbers from 1 to %d = ",n);
    for(i=1;i<=n;i++){
          if(i%2!=0){
              printf(" %d",i);
              odd_sum+=i;
          }
    }
    printf("\nSum of odd numbers = %d\n",odd_sum);
    
    return 0;
}

#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
  
if(x>0){
  printf("%d is a positive number.");
}
else if(x<0){
  printf("%d is a negative number.");
}
else{
  printf("The number is 0");
}
  
return 0;
}

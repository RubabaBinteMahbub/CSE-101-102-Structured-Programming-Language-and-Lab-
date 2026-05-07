#include<stdio.h>

int main()
{
int x,y,z;
  
scanf("%d%d",&x,&y);
  
if(y>x && y>z){
   printf("%d is biggest number.\n",y);
}
else if(z>x && z>y){
   printf("%d is biggest number.\n",z);
}
else{
   printf("%d is biggest number.\n",x);
}
  
return 0;
}

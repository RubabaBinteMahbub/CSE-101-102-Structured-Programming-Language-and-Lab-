#include<stdio.h>
int main()
{
int x,y,z;
  
printf("My money =\n");
scanf("%d",&x);
  
printf("Used money =\n");
scanf("%d",&y);
  
printf("Money that my brother gave me :\n");
scanf("%d",&z);
  
printf("Remained money = %d",x+z-y);
return 0;
}

#include<stdio.h>

int main()
{
     int x, y ;

     printf("Enter value of x : ");
     scanf("%d", &x);
  
     printf("Enter value of y : ");
     scanf("%d", &y);
  
     float div ;
     div = (float)x/y;
  
    // If you don't put (float) before x ans will be 2.00000.It is called type convertion.
     
     printf("Division of x and y = %f", div);
  
     return 0;
}

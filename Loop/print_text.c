// Print "Hello!" 10 times.

#include<stdio.h>

int main()
{
    int a;
  
    for(a=1;a<=10;a++){
      printf("Hello!\n");
    }

   /* You can write a=a+1 for increment.or
   a=a+4. But in this case it will print 3
   times as a can be 1, 5, 9, 13.... but 1, 5 
   and 9 is acceptable for this condition.*/

    return 0;
}

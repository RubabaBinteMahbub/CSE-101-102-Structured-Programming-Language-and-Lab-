#include <stdio.h>

int main()
{
    int num=9;
  
    if(num<0){
        printf("%d is negative.\n",num);
    }
    else if(num>0){
        printf("%d is positive.\n",num);
    }
    else{
        printf("%d is zero.\n");
    }
  
    return 0;
}

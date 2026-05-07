#include<stdio.h>

int main()
{
    int num=9,flag;

    // Ternary Operator
    flag = (num<0)? 1 : (num>0)?2 : 3;

    // Swich Case (works like if-else)
    switch(flag){
    case 1: printf("Negative"); break;
    case 2: printf("Positive"); break;
    default:printf("The Number is zero.");
    }
  
    return 0;
}

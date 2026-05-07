#include<stdio.h>

int main()
{
char alph;
scanf(" %c",&alph);
  
if(alph>='a' && alph<='z'){
   printf("Alphabet");
}
else if(alph>='A' && alph<='Z'){
   printf("Alphabet\n");
}
else {
   printf("Not Alphabet\n");
}
  
return 0;
}

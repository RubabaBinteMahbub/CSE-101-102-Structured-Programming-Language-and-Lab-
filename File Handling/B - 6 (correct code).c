#include<stdio.h>

int main()
{
  FILE *fptr = fopen("fileName","r");

  if(fptr==NULL){
    printf("Not able to open the file.");
    return 0;
  }

  char myString[100];
  
  while(fgets(myString,100,fptr)){
     printf("%s",myString);
  }
  
  fclose(fptr);
  
  return 0;
}

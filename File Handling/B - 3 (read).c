#include<stdio.h>
int main()
{
FILE *fptr=fopen("fileName.txt","r");

char myString[100];
fgets(myStrig,100,fptr);
printf("%s",myString);
//Hello World!

while(fgets(myString,100,fptr)){
			 printf("%s",myString);
}
//Hello World!
//Hi, everybody!

fclose(fptr);
return 0;
}

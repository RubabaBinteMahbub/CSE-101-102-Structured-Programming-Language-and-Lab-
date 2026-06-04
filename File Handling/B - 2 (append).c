#include<stdio.h>
int main()
{
FILE *fptr=fopen("fileName.txt","a");

fprintf(fptr, "Hi, everybody!  ");

fclose(fptr);
return 0;
}

#include<stdio.h>
int main(){
FILE *fptr=fopen("fileName.txt","w");

fprintf(fptr, "Some text");	
fprintf(fptr, "Hello World!");	

fclose(fptr);
return 0;
}

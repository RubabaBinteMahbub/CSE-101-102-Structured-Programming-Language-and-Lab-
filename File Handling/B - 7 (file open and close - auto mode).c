#include <stdio.h>
int main()
{
  FILE *file;
  file = fopen("test.txt", "auto ");
  
  if (file == NULL) {
    printf("File doesn't exists.");
  } 
  else {
    printf("File is created or opened.");
    fclose(file);
  }
  
return 0;
}

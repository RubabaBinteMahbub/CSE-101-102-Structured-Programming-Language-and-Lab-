//Writing on file usin fputc(স্ট্রিং এর একটা একটা করে character প্রিন্ট করা।)

#include<stdio.h>
#include<string.h>

int main()
{
  FILE *file;
  char name[ ]="Rubaba Binte Mahbub";

  int len=strlen(name);
 
  file=fopen("test.txt","w");
  
  if(file==NULL){
    printf("File doesn't exist.");
  }
  else{
    printf("The file is opened.\n");
    
    for(int i=0;i<len;i++){
      fputc(name[i],file);
    }
    
	  fputs(name,file);

	  fprintf(file,%s,name);
      
	  fwrite(file,sizeof(char),strlen(name),
    name);

    printf("File is written successfully \n");
    
      fclose(file);
  }
      
  return 0;
}

//fputc(name[i],file);
//fputs(name,file);
//fprintf(file, "%s", name);

#include<stdio.h>
int main()
{
int size,i,temp;
  
printf("Enter the array size : ");
scanf("%d",&size);
  
int a[size];.
  
printf("Enter the elements : ");
for(i=0;i<size;i++){
				scanf("%d",a[i]);
}

for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
		    if(a[i]>a[j]){
			  //ছোট আগে লাগবে। তাই a[j] অর্থাৎ ছোটকে সামনে নিয়ে আসবো।
	   	    temp=a[i];
	 		    a[i]=a[j];
   		    a[j]=temp;
     	 }
   }
}

printf("Given array in ascending order :");
for(i=0;i<size;i++){
  printf(" %d",a[i]);
}
  
return 0;
}

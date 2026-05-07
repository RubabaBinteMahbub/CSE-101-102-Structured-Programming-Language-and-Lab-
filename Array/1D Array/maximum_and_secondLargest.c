#include<stdio.h>
int main()
{
int size,i,j,temp;
  
printf("Enter the array size : ");
scanf("%d",&size);
  
int a[size];
  
printf("Enter the elements : ");
for(i=0;i<size;i++){
		scanf("%d",&a[i]);
}

// Sorting in descending order
for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
				if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				}
	 }
}

printf("Given array in descending order :");
for(i=0;i<size;i++){
  printf(" %d",a[i]);
}

printf("\nLargest or maximum element : %d\n",a[0]);
printf("Second largest element : %d\n",a[1]);

return 0;
}

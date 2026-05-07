#include<stdio.h>

int main()
{
int a[5],b[5],merged[10],i,j;  // Merged array size=size1+size2
  
printf("Enter elements of array a:");
for(i=0;i<5;i++){
  scanf("%d",&a[i]);
}
  
printf("Enter elements of array b:");
for(i=0;i<5;i++){
  scanf("%d",&b[i]);
}

// Merging arrays
for(i=0;i<5;i++){
	 merged[i]=a[i];
}
for(j=0;j<5;j++){
	merged[i+j]=b[j];
  // অর্থাৎ merged এ আগের i এর সাথে j ও যুক্ত করলাম।
}
  
printf("Merged array = ");
for(i=0;i<10;i++){
	printf(" %d",merged[i]);
}
  
return 0;
}

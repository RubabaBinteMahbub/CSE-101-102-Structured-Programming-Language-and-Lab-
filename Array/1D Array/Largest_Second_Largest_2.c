 #include<stdio.h>

int main()
{
int size,i;
  
printf("Enter size : ");
scanf("%d",&size);
  
int a[size];
  
printf("Enter elements : ");
for(i=0; i<size;i++){
  scanf("%d",&a[i]);
}

int max=max2=a[0];
for(i=0;i<size;i++){
  if(a[i]>max){
    max2=max;  //extra
    max=a[i];	//max পেয়ে যাব পাশাপাশি ২টা তুলনা করছি।
  }
  else if(max>a[i] && a[i]>max2){
    max2=a[i]; //max ও current max2 এর সাথে তুলনাকরে max2 পেয়ে যাব।
  }
}

return 0;
}

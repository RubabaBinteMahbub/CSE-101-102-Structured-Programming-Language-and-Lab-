#include<stdio.h>

int main()
{
    int s;
    printf("Input size of array : ");
    scanf("%d",&s);
  
    int a[s], i, j, temp;

    printf("Input array elements: ");
    for(i = 0; i < s; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < s-1; i++){
        for(j = i + 1; j < s; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array sorted in ascending order : ");
    for(i = 0; i < s; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int a[10], b[10], i, j, count, k = 0;

    printf("Input array elements : ");
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++){
        count = 0;
        for(j = 0; j < 10; j++){
            if(a[i] == a[j])
                count++;
        }
        if(count == 1){   // appear only once
            b[k++] = a[i];
        }
    }

    printf("All unique elements in the array are: ");
    for(i = 0; i < k; i++){
        printf("%d, ", b[i]);
    }

    return 0;
}

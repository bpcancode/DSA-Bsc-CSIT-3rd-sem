#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter a size of an array:");
    scanf("%d", &n);

    int* arr = calloc(n, sizeof(int));
    printf("Enter elements of an array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
    }

    printf("Your array is: \n");
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for(int i=0; i<n; i++) {
        if(max < arr[i])
            max = arr[i];
        else if (min > arr[i])
            min = arr[i];
    }

    printf("Max = %d\nMin = %d", max, min);
}
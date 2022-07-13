#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter the size of an array");
    scanf("%d", &n);

    int* arr = calloc(n, sizeof(int));

    printf("Enter elements of an array:\n");

    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
    }

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array is : \n");
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}
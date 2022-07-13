#include<stdio.h>
#include<stdlib.h>


int main() {
    int n=5;


    printf("Allocating memory for 5 numbers in an array:\n");
    int* arr = malloc(n*sizeof(int));

    if(arr != NULL) {
        printf("Memory allocation successed\n");
    } else {
        printf("Memory allocation failed");
        exit(0);
    }

    printf("Enter 5 array numbers: \n");
    for(int i=0; i<n; i++) {
        scanf("%d", arr+i);
    }

    printf("Reallocating mememory for additional 5 numbers.....\n");
    int t=5;
    arr = (int*) realloc(arr, (n+t)*sizeof(int));

    if(arr != NULL) {
        printf("Memory allocation sucessed\n");
    } else {
        printf("Memory allocation failed");
        exit(0);
    }

    printf("Enter additional 5 numbers in array\n");
    for(int i=n; i<n+t; i++) {
        scanf("%d", arr+i);
    }

    printf("Numbers inside of an array are:\n");
    for(int i=0; i<10; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

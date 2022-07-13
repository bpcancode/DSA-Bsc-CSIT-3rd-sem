/* ARRAY AS AN ABSTRACT DATA TYPE (ADT) SHOULD HAVE FOLLOWING FUNCTIONS
    1) retrive(a, pos);  => display element in a given position of an array
    2) store(a, pos, element); => store element in a given position in an array
    3) display(a) => display elements of array
*/

#include<stdio.h>
#include<stdlib.h>

void retrive(int*, int);
void store(int*, int, int);
void display(int*);

int main() {
    int pos, element;
    int arr[5] = {1,2,3,4,5};
    printf("Enter the position ( 0 to 4)\n");
    scanf("%d", &pos);
    retrive(arr, pos);
    
    printf("Enter the position and element you want to store in that position:\n");
    scanf("%d%d", &pos, &element);
    store(arr, pos, element);

    printf("Total element in an array are \n");
    display(arr);

}

void retrive(int* arr, int pos) {
    if(pos < 0 || pos > 4){
        printf("Out of bound error occured\n");
    } else {
        printf("%d is in position %d\n", arr[pos], pos);
    }
}

void store(int* arr, int pos, int element) {
    if(pos < 0 || pos > 4){
        printf("Out of bound error occured\n");
    } else {
        arr[pos] = element;
        printf("%d is stored in position %d\n", arr[pos], pos);
    }
}

void display(int* arr) {
    for(int i=0; i<5; i++) {
        printf("%d\n", arr[i]);
    }
}
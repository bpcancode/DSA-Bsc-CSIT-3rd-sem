#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("Enter a size of an array:");
	scanf("%d", &n);

	int* arr= malloc( n*sizeof(int));
	int sum=0;

	printf("Enter the members of an array:\n");

	for(int i=0; i<n; i++){
		scanf("%d", arr+i);
	}

	printf("Your array is : ");
	for(int i=0; i<n; i++){
		printf("%d\n", arr[i]);
	}


	for(int i=0; i<n; i++){
		sum += arr[i];
	}

	printf("Sum of all element of an array is %d", sum);
	
	free(arr);
	return 0;
	
}

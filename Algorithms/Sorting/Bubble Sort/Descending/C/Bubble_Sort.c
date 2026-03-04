#include <stdio.h>
#include <stdbool.h>

int main() {
	// your code goes here
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the numbers of the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int iterations = 0;
    while(true){
        iterations = 0;
        for(int i = 0; i < size; i++){
            if((i+1) != size && arr[i] < arr[i+1]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
                iterations++;
            }
        }
        if(iterations == 0){
            break;
        }
    }
    printf("\n");
    printf("The sorted array is: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
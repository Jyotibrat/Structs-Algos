#include<stdio.h>
#include<stdbool.h>

int main(){

    int n, k = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the numbers in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    bool isLeader = true;
    int leaders[n];

    for(int i = 0; i < n; i++){
        isLeader = true;
        for(int j = (i + 1); j < n; j++){
            if(array[i] < array[j]){
                isLeader = false;
                break;
            }
        }
        if(isLeader == true){
            leaders[k] = array[i];
            k++;
        }
    }

    printf("The Leaders in the array: ");
    for(int i = 0; i < k; i++){
        if(i == (k - 1)){
            printf("%d ", leaders[i]);
        }else{
            printf("%d, ", leaders[i]);
        }
    }

    return 0;
}
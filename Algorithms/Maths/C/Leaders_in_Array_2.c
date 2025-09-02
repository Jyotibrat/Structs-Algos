#include<stdio.h>

int main(){

    int n, k = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the numbers in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    int leader = array[n - 1];
    int leaders[n];
    for(int i = (n - 1); i >= 0; i--){
        if(array[i] >= leader){
            leaders[k] = array[i];
            leader = array[i];
            k++;
        }
    }

    for(int i = 0; i < k; i++){
        if(i == (k - 1)){
            printf("%d ", leaders[i]);
        }else{
            printf("%d, ", leaders[i]);
        }
    }    

    return 0;
}
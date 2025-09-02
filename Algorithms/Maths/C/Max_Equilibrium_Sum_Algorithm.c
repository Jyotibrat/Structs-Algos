#include<stdio.h>

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the numbers in tha array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    int ts = 0;
    for(int i = 0; i < n; i++){
        ts += array[i];
    }

    int ls = 0, max_sum = 0, pos = 0;

    for(int i = 0; i < n; i++){
        ts -= array[i];
        if(ts == ls && ls > max_sum){
            max_sum = ls;
            pos = i;
        }
        ls += array[i];
    }

    printf("The position where the Max Equilibrium Sum occurs: %d", pos);

    return 0;
}
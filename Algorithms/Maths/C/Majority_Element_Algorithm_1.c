#include<stdio.h>

int main(){

    int n, count = 0, max_count = 0, element = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the numbers in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++){
        count = 0;
        for(int j = 0; j < n; j++){
            if(array[i] == array[j]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            element = array[i];
        }
    }

    if(max_count > (n / 2)){
        printf("The Majority Element: %d\n", element);
        printf("Count for Majority Element: %d\n", max_count);
    }else{
        printf("The Majority Element does not exists.\n");
    }

    return 0;
}
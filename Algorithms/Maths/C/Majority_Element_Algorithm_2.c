#include<stdio.h>

int main(){

    int n, element = 0, count = 0, max_count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the numbers in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++){
        if(count == 0){
            element = array[i];
            count = 1;
        }else if(element == array[i]){
            count++;
        }else{
            count--;
        }
    }

    for(int i = 0; i < n; i++){
        if(element == array[i]){
            max_count++;
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
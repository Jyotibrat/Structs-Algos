#include<stdio.h>
#include<stdbool.h>

int main(){

    int n;
    printf("Enter the number until which you want to find the prime numbers: ");
    scanf("%d", &n);

    bool array[n];

    for(int i = 2; i < n; i++){
        array[i] = true;
    }

    for(int i = 2; (i * i) < n; i++){
        if(array[i] == true){
            for(int j = (i * i); j < n; j += i){
                array[j] = false;
            }
        }
    }

    int flag = 0;
    
    printf("The Prime Numbers till %d are: ", n);
    for(int i = 2; i < n; i++){
        if(array[i] == true){
            for (int j = (i + 1); j < n; j++){
                if(array[j] == true){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                printf("%d, ", i);
            }else{
                printf("%d", i);
            }
        }
    }

    return 0;
}
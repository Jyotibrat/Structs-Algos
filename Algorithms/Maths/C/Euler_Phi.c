#include<stdio.h>

int main(){

    int n, num, result;
    printf("Enter the Number: ");
    scanf("%d", &n);

    num = n, result = n;

    for(int i = 2; (i * i) < n; i++){
        if(n % i == 0){
            while (n % i == 0){
                n /= i;
            }
            result -= result / i;
        }
    }

    if(n > 1){
        result -= result / n;
    }

    printf("The value of Euler Totient Value of %d is: %d", num, result);

    return 0;
}
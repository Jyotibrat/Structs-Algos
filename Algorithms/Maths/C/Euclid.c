#include<stdio.h>

int GCD(int a, int b){
    
    if(b == 0){
        return a;
    }

    return GCD(b, a % b);
}
int main(){

    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);
    
    if(n1 > n2){
        printf("The GCD of %d and %d is: %d", n1, n2, GCD(n1, n2));
    }else{
        printf("The GCD of %d and %d is: %d", n1, n2, GCD(n2, n1));
    }

    return 0;
}
#include<stdio.h>

int main(){

    int n, temp, reversed = 0;
    printf("Enter the number which is to be checked if it is Binary Palindrome or not: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0){
        reversed <<= 1;
        reversed |= (temp & 1);
        temp >>= 1;
    }
    
    if(reversed == n){
        printf("%d is a Binary Palindrome.", n);
    }else{
        printf("%d is not a Binary Palindrome.", n);
    }

    return 0;
}
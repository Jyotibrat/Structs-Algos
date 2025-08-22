#include <iostream>
using namespace std;

int main(){
    
    int n, temp, reversed = 0;
    cout << "Enter the number which is to be checked if it is Binary Palindrome or not: ";
    cin >> n;

    temp = n;

    while (temp > 0){
        reversed <<= 1;
        reversed |= (temp & 1);
        temp >>= 1;
    }

    if(reversed == n){
        cout << n << " is a Binary Palindrome.";
    }else{
        cout << n << " is not a Binary Palindrome.";
    }
    

    return 0;
}
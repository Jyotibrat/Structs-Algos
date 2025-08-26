#include<iostream>
using namespace std;

int main(){

    int n, num, result;
    cout << "Enter the Number: ";
    cin >> n;

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

    cout << "The value of Euler Totient Value of " << num << " is: " << result;

    return 0;
}
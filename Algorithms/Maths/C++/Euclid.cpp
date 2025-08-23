#include<iostream>
using namespace std;

int GCD(int a, int b){
    
    if(b == 0){
        return a;
    }

    return GCD(b, a % b);
}

int main(){

    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    if(n1 > n2){
        cout << "The GCD of " << n1 << " and " << n2 << " is: " << GCD(n1, n2);
    }else{
        cout << "The GCD of " << n1 << " and " << n2 << " is: " << GCD(n2, n1);
    }

    return 0;
}
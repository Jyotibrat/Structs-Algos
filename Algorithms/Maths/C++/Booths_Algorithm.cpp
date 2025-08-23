#include<iostream>
#include<limits>
using namespace std;

int main(){

    int m, q, result = 0, count = __CHAR_BIT__ * sizeof(int);
    
    cout << "Enter the Multiplicand: ";
    cin >> m;

    cout << "Enter the Multiplier: ";
    cin >> q;

    int a = m;
    int q_temp = q;
    while (count > 0){
        if((q_temp & 1) == 1){
            result += a;
        }
        a <<= 1;
        q_temp >>= 1;
        count--;
    }

    cout << "The Multiplication of " << m << " and " << q << " is: " << result << endl;
    

    return 0;
}
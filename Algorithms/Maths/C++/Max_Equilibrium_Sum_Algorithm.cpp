#include<iostream>
using namespace std;

int main(){

    int n, ls = 0, max_sum = 0, pos = 0;
    cout << "Enter the size of the array: ";
    cin >> n;  

    int array[n];

    cout << "Enter the numbers in tha array: ";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int ts = 0;
    for(int i = 0; i < n; i++){
        ts += array[i];
    }

    for(int i = 0; i < n; i++){
        ts -= array[i];
        if(ts == ls & ls > max_sum){
            max_sum = ls;
            pos = i;
        }

        ls += array[i];
    }

    cout << "The position where the Max Equilibrium Sum occurs: " << pos << endl;

    return 0;
}
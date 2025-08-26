#include<iostream>
using namespace std;

int main(){

    int n, k = 0;
    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];

    cout << "Enter the numbers in the array: ";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int leaders[n], l = array[n - 1];

    for(int i = (n - 1); i >= 0; i--){
        if(array[i] == array[n - 1]){
            leaders[k] = array[i];  
            l = array[i];
        }else if(leaders[k] < array[i]){
            k++;
            leaders[k] = array[i];
        }
    }

    cout << "The Leaders in the array: ";
    for(int i = 0; i <= k; i++){
        if(i == k){
            cout << leaders[i] << " ";
        }else{
            cout << leaders[i] << ", ";
        }
    }

    return 0;
}
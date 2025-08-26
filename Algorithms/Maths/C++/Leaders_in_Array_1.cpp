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

    bool isLeader = true;
    int leaders[n];

    for(int i = 0; i < n; i++){
        isLeader = true;
        for(int j = (i + 1); j < n; j++){
            if(array[i] < array[j]){
                isLeader = false;
                break;
            }
        }
        if(isLeader){
            leaders[k] = array[i];
            k++;
        }
    }

    cout << "The Leaders in the array: ";
    for(int i = 0; i < k; i++){
        if(i == (k - 1)){
            cout << leaders[i] << " ";
        }else{
            cout << leaders[i] << ", ";
        }
    }
    
    return 0;
}
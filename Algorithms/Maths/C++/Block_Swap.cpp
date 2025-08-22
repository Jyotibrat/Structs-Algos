#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    cout << "Array after Block Swapping: ";
    for(int i = 0; i < n; i++){
        if(n - 1 == i){
            cout << arr[i];
        }else{
            cout << arr[i] << ", ";
        }
    }
}

void Swap(int arr[], int fi, int si, int d){
    int temp;
    for(int i = 0; i < d; i++){
        temp = arr[fi + i];
        arr[fi + i] = arr[si + i];
        arr[si + i] = temp;
    }
}

void leftRotate(int arr[], int n, int d){
    if(d == 0 || d == n){
        return;
    }

    if(d > n){
        d %= n;
    }

    int i = d;
    int j = n - d;

    while (i != j){
        if(i < j){
            Swap(arr, d - i, d + j - i, i);
            j -= i;
        }else{
            Swap(arr, d - i, d, j);
            i -= j;
        }
    }
    Swap(arr, d - i, d, i);
    
}

int main(){
    
    int n, d;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the Block size: ";
    cin >> d;

    int array[n];

    cout << "Enter the numbers in the array: ";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    leftRotate(array, n, d);
    printArray(array, n);

    return 0;
}
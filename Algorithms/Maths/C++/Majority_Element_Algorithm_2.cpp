#include<iostream>
using namespace std;

int main(){

    int n, max_count = 0, count = 0, element = 0;
    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];

    cout << "Enter the numbers in the array: ";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    for(int i = 0; i < n; i++){
        if(count == 0){
            count = 1;
            element = array[i];
        }else if(element == array[i]){
            count++;
        }else{
            count--;
        }
    }

    for(int i = 0; i < n; i++){
        if(element == array[i]){
            max_count++;
        }
    }

    if(max_count > (n / 2)){
        cout << "The Majority Element: " << element << "\nCount for Majority Element: " << max_count << endl;
    }else{
        cout << "The Majority Element does not exists." << endl;
    }

    return 0;
}
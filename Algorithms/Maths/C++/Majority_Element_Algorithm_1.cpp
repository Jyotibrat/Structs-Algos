#include<iostream>
using namespace std;

int main(){

    int n, count = 0, max_count = 0, element = 0;
    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];
    
    cout << "Enter the numbers in the array: ";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }



    for(int i = 0; i < n; i++){
        count = 0;
        for(int j = 0; j < n; j++){
            if(array[j] == array[i]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            element = array[i];
        }
    }

    if(max_count > (n / 2)){
        cout << "The Majority Element: " << element << endl;
        cout << "Count for Majority Element: " << max_count << endl;
    }else{
        cout << "The Majority Element does not exists." << endl;
    }

    return 0;
}
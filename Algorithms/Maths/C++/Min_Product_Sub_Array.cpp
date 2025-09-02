#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];

    cout << "Enter the numbers in the array: ";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int maximum = array[0], minimum = array[0], mini = array[0];
    
    for(int i = 1; i < n; i++){
        if(array[i] > 0){
            maximum = max(array[i], array[i] * maximum);
            minimum = min(array[i], array[i] * minimum);
        }else if(array[i] == 0){
            maximum = minimum = 0;
        }else{
            maximum = max(array[i], array[i] * minimum);
            minimum = min(array[i], array[i] * maximum);
        }
        mini = min(minimum, mini);
    }

    cout << "The Minimum Product of a Sub array is: " << mini << endl;

    return 0;
}
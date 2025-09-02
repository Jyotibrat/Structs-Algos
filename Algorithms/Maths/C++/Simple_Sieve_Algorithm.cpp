#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number until which you want to find the prime numbers: ";
    cin >> n;

    bool array[n];

    for(int i = 2; i < n; i++){
        array[i] = true;
    }

    for(int i = 2; (i * i) < n; i++){
        if(array[i] == true){
            for(int j = (i * i); j < n; j += i){
                array[j] = false;
            }
        }
    }

    int flag = 0;

    cout << "The Prime Numbers till " << n << " are: ";
    for(int i = 2; i < n; i++){
        flag = 0;
        if(array[i] == true){
            for(int j = (i + 1); j < n; j++){
                if(array[j] == true){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                cout << i << ", ";
            }else{
                cout << i << endl;
            }
        }
    }

    return 0;
}
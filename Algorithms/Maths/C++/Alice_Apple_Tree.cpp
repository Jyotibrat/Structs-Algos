#include<iostream>
using namespace std;

int main(){

    int apple, count = 0, sum = 0;
    cout << "Enter the value of the Apple: ";
    cin >> apple;

    while (sum < apple){
        count++;
        sum += (12 * count * count);
    }

    cout << "n: " << (12 * count * count) << endl;
    cout << "Sigma(" << (12 * count * count) << "): " << sum << endl;
    cout << "Count: " << count << endl;
    cout << "Perimeter: " << (8 * count) << endl;

    return 0;
}
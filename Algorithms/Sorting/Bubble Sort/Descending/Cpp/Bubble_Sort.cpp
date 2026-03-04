#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> sort;
    cout << "Enter numbers to sort (Ctrl + D to end input):" << endl;
    int temp;
    while(cin >> temp){
        sort.push_back(temp);
    }
    while(true){
        int iteration = 0;
        for(int i = 0; i < sort.size(); i++){
            if (sort[i] < sort[i+1] && (i+1) != sort.size()){
                int temp = sort[i+1];
                sort[i+1] = sort[i];
                sort[i] = temp;
                iteration++;
            }
        }
        if(iteration == 0){
            break;
        }
    }
    cout << "The sorted array is: ";
    for(int i = 0; i < sort.size(); i++){
        cout << sort[i] << " ";
    }
    return 0;
}

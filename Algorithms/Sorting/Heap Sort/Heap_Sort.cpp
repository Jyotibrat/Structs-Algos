#include<iostream>
#include<vector>
using namespace std;

void Heapify_Ascending(vector<int>& Arr, int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if(left < n && Arr[left] > Arr[largest]){
        largest = left;
    }
    if(right < n && Arr[right] > Arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(Arr[i], Arr[largest]);
        Heapify_Ascending(Arr, n, largest);
    }
}

void Heapify_Descending(vector<int>& Arr, int n, int i){
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if(left < n && Arr[left] < Arr[smallest]){
        smallest = left;
    }
    if(right < n && Arr[right] < Arr[smallest]){
        smallest = right;
    }
    if(smallest!=i){
        swap(Arr[i], Arr[smallest]);
        Heapify_Descending(Arr, n, smallest);
    }
}

void Heap_Sort(vector<int>& Arr, int choice){
    int n = Arr.size();

    if(choice == 1){
        for (int i = n / 2 - 1; i >= 0; i--){
            Heapify_Ascending(Arr, n, i);
        }

        for (int i = n - 1; i > 0; i--){
            swap(Arr[i], Arr[0]);
            Heapify_Ascending(Arr, i, 0);
        }
    }else if(choice == 2){
        for (int i = n / 2 - 1; i >= 0; i--){
            Heapify_Descending(Arr, n, i);
        }

        for (int i = n - 1; i > 0; i--){
            swap(Arr[i], Arr[0]);
            Heapify_Descending(Arr, i, 0);
        }
    }else{
        return;
    }
}

void display(const vector<int>& Arr){
    for(int num : Arr){
        cout << num << " ";
    }
    cout << endl;
}

int main(){
    vector<int> Heap;
    int n, num, choice;
    cout << "Enter the number of elements in the Heap: ";
    cin >> n;
    cout << "Enter the elements in the Heap: " << endl;
    for(int i = 0; i < n; i++){
        cin >> num;
        Heap.push_back(num);
    }

    while (true){
        cout << "\nEnter the choice: \n\n1. To sort the Heap in ascending order.\n2. To sort the Heap in descending order.\n3. To Exit the program.\n" << endl;
        cin >> choice;
        switch (choice){
            case 1:
                Heap_Sort(Heap, choice);
                display(Heap);
                break;

            case 2: 
                Heap_Sort(Heap, choice);
                display(Heap);
                break;

            case 3:
                cout << "Exiting the program." << endl;
                return 0;

            default:
                cout << "Wrong choice entered. Try again!" << endl;
                break;
        }
    }
    

    return 0;
}
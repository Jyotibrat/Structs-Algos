#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;

class Max_Heap{
    private:
        vector<int> Heap;
        int parent(int i){
            return (i - 1) / 2;
        }
        int left_child(int i){
            return (2 * i + 1);
        }
        int right_child(int i){
            return (2 * i + 2);
        }
        void Heapify_Up(int i){
            while(i > 0 && Heap[parent(i)] < Heap[i]){
                swap(Heap[i], Heap[parent(i)]);
                i = parent(i);
            }
        }
        void Heapify_Down(int i){
            int largest = i;
            int left = left_child(i);
            int right = right_child(i);
            if(left < Heap.size() && Heap[left] > Heap[largest]){
                largest = left;
            }
            if(right < Heap.size() && Heap[right] > Heap[largest]){
                largest = right;
            }
            if(largest != i){
                swap(Heap[i], Heap[largest]);
                Heapify_Down(largest);
            }
        }
        
    public:
        void insert(int key){
            Heap.push_back(key);
            Heapify_Up(Heap.size() - 1);
        }
        void Delete(){
            if(Heap.empty()){
                throw out_of_range("Heap is Empty");
            }
            if(Heap.size() == 1){
                Heap.pop_back();
                return;
            }
            Heap[0] = Heap.back();
            Heap.pop_back();
            Heapify_Down(0);
        }
        int Get_Max(){
            if(Heap.empty()){
                throw out_of_range("Heap is Empty");
            }
            return Heap[0];
        }
        bool Is_Empty(){
            return Heap.empty();
        }
        void clear(){
            Heap.clear();
        }
        void display(){
            if(Heap.empty()){
                cout << "Heap is Empty." << endl;
                return;
            }
            cout << "Heap: ";
            for(int i : Heap){
                cout << i << " ";
            }
            cout << endl;
        }
};

int main(){
    Max_Heap obj;
    int number_of_choice, choice, value;
    cout << "Enter the number of choices: ";
    cin >> number_of_choice;
    while(number_of_choice--){
        cout << "\nEnter the choice: \n\n1. Insert value.\n2. Delete value\n3. Get the maximum value\n4. Display the Heap\n5. Clear the Heap\n6. Check if the Heap is empty or not.\n\n";
        cin >> choice;
        try{
            switch (choice)
            {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> value;
                obj.insert(value);
                cout << value << " has been inserted successfully." << endl;
                break;
            
            case 2:
                obj.Delete();
                cout << "Deleted the root element." << endl;
                break;

            case 3: 
                cout << "The maximum element in the Heap: " << obj.Get_Max() << endl; 
                break;

            case 4:
                obj.display();
                break;

            case 5:
                obj.clear();
                cout << "Cleared the Heap." << endl;
                break;

            case 6:
                if(obj.Is_Empty()){
                    cout << "Heap is empty" << endl;
                }else{
                    cout << "Heap is not empty" << endl;
                }
                break;

            default:
                cout << "Invalid Choice entered. Enter the choice again!" << endl;
                number_of_choice++;
                break;
            }
        }
        catch(const out_of_range& exception){
            cout << exception.what() << endl;
        }
    }

    return 0;
}
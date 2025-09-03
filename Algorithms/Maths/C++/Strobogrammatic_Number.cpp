#include <iostream>
#include <string>
#include <unordered_map>
#include<vector>
using namespace std;

class StrobogrammaticChecker {
    private:
        unordered_map<char, char> rotationMap = {
            {'0', '0'},
            {'1', '1'},
            {'6', '9'},
            {'8', '8'},
            {'9', '6'}
        };

    public:
        bool isValidDigit(char digit){
            
            return rotationMap.find(digit) != rotationMap.end();
        }

        char getRotatedDigit(char digit){
            if (rotationMap.find(digit) != rotationMap.end()){
                return rotationMap[digit];
            }

            return '?';
        }

        bool isStrobogrammatic(string num) {
            int left = 0;
            int right = num.length() - 1;
            
            while (left <= right){
                char leftDigit = num[left];
                char rightDigit = num[right];
                
                if (!isValidDigit(leftDigit) || !isValidDigit(rightDigit)){
                    return false;
                }
                
                if (getRotatedDigit(leftDigit) != rightDigit){
                    return false;
                }
                
                left++;
                right--;
            }
            
            return true;
        }

        bool isStrobogrammatic(int num){
            return isStrobogrammatic(to_string(num));
        }

        string getRotatedNumber(string num){
            string rotated = "";
            
            for (char digit : num){
                if (!isValidDigit(digit)){
                    return "Invalid - contains non-strobogrammatic digits";
                }
            }
            
            for (int i = num.length() - 1; i >= 0; i--){
                rotated += getRotatedDigit(num[i]);
            }
            
            return rotated;
        }
};

int main(){
    
    StrobogrammaticChecker checker;
        
    cout << "Enter the Number: ";
    string input;
    cin >> input;
    
    bool isStrobo = checker.isStrobogrammatic(input);
        
    if (isStrobo){
        string rotated = checker.getRotatedNumber(input);
    
        if (input == rotated){
            cout << "The Entered Number is a Strobogrammatic Number." << endl;
        }else{
            cout << "The Entered Number is not a Strobogrammatic Number." << endl;
        }
    }else{
        cout << "The Entered Number is not a Strobogrammatic Number." << endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int r, c, sum = 0, max_sum = 0;
    cout << "Enter the number of rows of the matrix: ";
    cin >> r;
    cout << "Enter the number of columns of the matrix: ";
    cin >> c;

    if(r < 3 || c < 3){
        cout << "Maximum Hour Glass cannot be found because the number of rows and columns is less than 3.";
        return 0;
    }

    int matrix[r][c];

    cout << "Enter the numbers in the matrix: ";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < (r - 2); i++){
        for(int j = 0; j < (c - 2); j++){
            sum = matrix[i][j] + matrix[i][j + 1] + matrix[i][j + 2] + matrix[i + 1][j + 1] + matrix[i + 2][j] + matrix[i + 2][j + 1] + matrix[i + 2][j + 2];
            if(sum > max_sum){
                max_sum = sum;
            }
        }
    }

    cout << "The value of the Maximum Hour Glass of the Matrix is: " << max_sum;

    return 0;
}
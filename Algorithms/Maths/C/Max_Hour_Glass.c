#include<stdio.h>

int main(){

    int r, c, sum = 0, max_sum = 0;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &c);

    if(r < 3 || c < 3){
        printf("Maximum Hour Glass cannot be found because the number of rows and columns is less than 3.");
        return 0;
    }

    int matrix[r][c];
    
    printf("Enter the numbers in the matrix: ");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &matrix[i][j]);
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
    
    printf("The value of the Maximum Hour Glass of the Matrix is: %d", max_sum);

    return 0;
}
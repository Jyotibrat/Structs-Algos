import java.util.Scanner;

public class Max_Hour_Glass {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows of the matrix: ");
        int r = sc.nextInt();
        System.out.print("Enter the number of columns of the matrix: ");
        int c = sc.nextInt();

        if(r < 3 || c < 3){
            System.out.println("Maximum Hour Glass cannot be found because the number of rows and columns is less than 3.");
            System.exit(0);
            sc.close();
        }

        int matrix[][] = new int[r][c];

        System.out.print("Enter the numbers in the matrix: ");
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                matrix[i][j] = sc.nextInt();
            }
        }

        int sum = 0, max_sum = 0;

        for(int i = 0; i < (r - 2); i ++){
            for(int j = 0; j < (c - 2); j++){
                sum = matrix[i][j] + matrix[i][j + 1] + matrix[i][j + 2] + matrix[i + 1][j + 1] + matrix[i + 2][j] + matrix[i + 2][j + 1] + matrix[i + 2][j + 2];
                max_sum = Math.max(max_sum, sum);
            }
        }

        System.out.println("The value of the Maximum Hour Glass of the Matrix is: " + max_sum);

        sc.close();
    }
}

import java.util.Scanner;

public class Bubble_Sort{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = sc.nextInt();
        int array[] = new int[size];
        System.out.println();
        System.out.print("Enter the elements of the array: ");
        for(int i = 0; i < size; i++){
            array[i] = sc.nextInt();
        }
        
        int iterations = 0;
        while(true){
            iterations = 0;
            for(int i = 0; i < size; i++){
                if((i+1) != size && array[i] < array[i+1]){
                    int temp = array[i+1];
                    array[i+1] = array[i];
                    array[i] = temp;
                    iterations++;
                }
            }
            if (iterations == 0)
                break;
        }
        System.out.println();
        System.out.print("The sorted array is: ");
        for(int i = 0; i < size; i++){
            System.out.print(array[i] + " ");
        }
        sc.close();
    }
}
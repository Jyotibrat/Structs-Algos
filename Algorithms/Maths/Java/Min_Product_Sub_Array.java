import java.util.Scanner;

public class Min_Product_Sub_Array {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();
        
        int array[] = new int[n];

        System.out.print("Enter the numbers in the array: ");
        for(int i = 0; i < n; i++){
            array[i] = sc.nextInt();
        }

        int max = array[0], m = array[0], min = array[0];
        for(int i = 1; i < n; i++){
            if(array[i] > 0){
                max = Math.max(array[i], array[i] * max);
                min = Math.min(array[i], array[i] * min);
            }else if(array[i] == 0){
                max = min = 0;
            }else{
                max = Math.max(array[i], array[i] * min);
                min = Math.min(array[i], array[i] * max);
            }
            m = Math.min(min, m);
        }

        System.out.println("The Minimum Product of a Sub array is: " + m);

        sc.close();
    }
}

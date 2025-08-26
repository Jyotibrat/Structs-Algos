import java.util.Scanner;

public class Leaders_in_Array_2 {
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();

        int array[] = new int[n];
        
        System.out.print("Enter the numbers in the array: ");
        for(int i = 0; i < n; i++){
            array[i] = sc.nextInt();
        }

        int leaders[] = new int[n], k = 0;

        int l = array[array.length - 1];
        for(int i = array.length - 1; i >= 0; i--){
            if(array[i] == array[array.length - 1]){
                leaders[k] = array[i];
                l = array[i];
                k++;
            }else if(l < array[i]){
                leaders[k] = array[i];
                l = array[i];
                k++;
            }
        }
        
        System.out.print("The Leaders in the array: ");
        for(int i = 0; i < k; i++){
            if(i == (k - 1)){
                System.out.print(leaders[i] + " ");
            }else{
                System.out.print(leaders[i] + ", ");
            }
        }

        sc.close();
    }   
}
import java.util.Scanner;

public class Max_Equilibrium_Sum_Algorithm {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        
        System.out.print("Enter the numbers in tha array: ");
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        int ts = 0;
        for(int i = 0; i < n; i++){
            ts += arr[i];
        }

        int ls = 0, max_sum = 0, pos = 0;

        for(int i = 0; i < n; i++){
            ts -= arr[i];
            if(ts == ls && ls > max_sum){
                max_sum = ls;
                pos = i;
            }
            ls += arr[i];
        }

        System.out.println("The position where the Max Equilibrium Sum occurs: " + pos);

        sc.close();
    }
}

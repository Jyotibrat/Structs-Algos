import java.util.Scanner;

public class Leaders_in_Array_1 {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();

        int arr[] = new int[n], k = 0;

        System.out.print("Enter the numbers in the array: ");
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        boolean isleader = true;
        int leaders[] = new int[n];

        for(int i = 0; i < n; i++){
            isleader = true;
            for(int j = (i + 1); j < n; j++){
                if (arr[i] < arr[j]) {
                    isleader = false;
                    break;
                }
            }
            if(isleader){
                leaders[k] = arr[i];
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

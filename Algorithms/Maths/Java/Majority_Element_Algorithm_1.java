import java.util.Scanner;

public class Majority_Element_Algorithm_1 {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();
        int array[] = new int[n];

        System.out.print("Enter the numbers in the array: ");
        for(int i = 0; i < n; i++){
            array[i] = sc.nextInt();
        }

        int count = 0, max_count = 0, element = 0;
        for(int i = 0; i < n; i++){
            count = 0;
            for( int j = 0; j < n; j++){
                if(array[i] == array[j]){
                    count++;
                }
            }
            if(max_count < count){
                max_count = count;
                element= array[i];
            }
        }

        if(max_count >= (n/2)){
            System.out.println("The Majority Element: " + element);
            System.out.println("Count for Majority Element: " + max_count);
        }else{
            System.out.println("The Majority Element does not exists.");
        }

        sc.close();
    }
}

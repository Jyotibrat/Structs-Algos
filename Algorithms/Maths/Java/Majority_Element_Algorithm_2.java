import java.util.Scanner;

public class Majority_Element_Algorithm_2 {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        int n, count = 0, max_count = 0, element = 0;

        System.out.print("Enter the size of the array: ");
        n = sc.nextInt();

        int array[] = new int[n];

        System.out.print("Enter the numbers in the array: ");
        for(int i = 0; i < n; i++){
            array[i] = sc.nextInt();
        }

        for(int i = 0; i < n; i++){
            if(count == 0){
                count = 1;
                element = array[i];
            }else if(element == array[i]){
                count++;
            }else{
                count--;
            }
        }

        for(int i = 0; i < n; i++){
            if(element == array[i]){
                max_count++;
            }
        }

        if(max_count > (n / 2)){
            System.out.print("The Majority Element: " + element + "\nCount for Majority Element: " + max_count);
        }else{
            System.out.print("The Majority Element does not exists.");
        }

        sc.close();
    }    
}

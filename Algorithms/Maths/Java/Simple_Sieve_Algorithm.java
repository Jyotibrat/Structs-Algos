import java.util.Scanner;

public class Simple_Sieve_Algorithm {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number until which you want to find the prime numbers: ");
        int n = sc.nextInt();

        boolean array[] = new boolean[n];

        for(int i = 2; i < n; i++){
            array[i] = true;
        }

        for(int i = 2; (i * i) < n; i++){
            if(array[i] == true){
                for(int j = (i * i); j < n; j += i){
                    array[j] = false;
                }
            }
        }

        int flag = 0;
        
        System.out.print("The Prime Numbers till " + n + " are: ");
        for(int i = 2; i < n; i++){
            flag = 0;
            if(array[i] == true){
                for(int j = (i + 1); j < n; j++){
                    if(array[j] == true){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 1){
                    System.out.print(i + ", ");
                }else{
                    System.out.print(i);
                }
            }
        }

        sc.close();
    }    
}
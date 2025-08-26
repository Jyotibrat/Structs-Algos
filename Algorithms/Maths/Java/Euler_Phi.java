import java.util.Scanner;

public class Euler_Phi {
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the Number: ");
        int n = sc.nextInt();

        int num = n;
        int result = n;
        for(int i = 2; (i * i) < n; i++){
            if(n % i == 0){
                while (n % i == 0) {
                    n /= i;
                }
                result -= result / i;
            }
        }

        if(n>1){
            result -= result / n;
        }
        System.out.println("The value of Euler Totient Value of " + num + " is: " + result);

        sc.close();
    }
}

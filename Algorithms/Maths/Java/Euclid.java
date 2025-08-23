import java.util.Scanner;

public class Euclid {

    public static int GCD(int a, int b){

        if(b == 0){
            return a;
        }

        return GCD(b, a % b);
    }

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        int n1 = sc.nextInt();

        System.out.print("Enter the second number: ");
        int n2= sc.nextInt();

        if(n1 > n2){
            System.out.print("The GCD of " + n1 + " and " + n2 + " is: " + GCD(n1, n2));
        }else{
            System.out.print("The GCD of " + n1 + " and " + n2 + " is: " + GCD(n2, n1));
        }

        sc.close();
    }   
}
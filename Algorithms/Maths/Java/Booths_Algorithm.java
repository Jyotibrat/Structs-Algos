import java.util.Scanner;

public class Booths_Algorithm {
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);
        
        int m, q, result = 0, count = Integer.SIZE;

        System.out.print("Enter the Multiplicand: ");
        m = sc.nextInt();

        System.out.print("Enter the Multiplier: ");
        q = sc.nextInt();

        int a = m;
        int q_temp = q;

        while (count > 0) {
            if ((q_temp & 1) == 1) {
                result += a;
            }
            a <<= 1;
            q_temp >>= 1;
            count--;
        }

        System.out.println("The Multiplication of " + m + " and " + q + " is: " + result);

        sc.close();
    }   
}
import java.util.Scanner;

public class Karatsuba_Algorithm {
    public static long Karatsuba(long x, long y){
        if(x < 10 || y < 10){
            return (x * y);
        }

        int n = Math.max(Long.toString(x).length(), Long.toString(y).length());
        int half = (n + 1) / 2;
        
        long a = x / (long) Math.pow(10, half);
        long b = x % (long) Math.pow(10, half);
        long c = x / (long) Math.pow(10, half);
        long d = x % (long) Math.pow(10, half);

        long ac = Karatsuba(a, c);
        long bd = Karatsuba(b, d);
        long adbc = Karatsuba(a + b, c + d) - ac - bd;

        return (long) (ac * Math.pow(10, 2 * half) + adbc * Math.pow(10, half) + bd);
    }
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the First Number: ");
        long n1 = sc.nextLong();
        System.out.print("Enter the Second Number: ");
        long n2 = sc.nextLong();

        System.out.println("The Multiplication of " + n1 + " and " + n2 + " is: " + Karatsuba(n1, n2));
        
        sc.close();
    }
}

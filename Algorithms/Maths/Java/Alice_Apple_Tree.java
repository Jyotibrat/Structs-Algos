import java.util.Scanner;

public class Alice_Apple_Tree {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the value of the Apple: ");
        int apple = sc.nextInt();

        int count = 0, sum = 0;

        while (sum < apple) {
            count++;
            sum += (12 * count * count);
        }

        System.out.println("n: " + 12 * count * count);
        System.out.println("Sigma("+12 * count * count+"): " + sum);
        System.out.println("Count: " + count);
        System.out.println("Perimeter: " + 8*count);

        sc.close();
    }
}

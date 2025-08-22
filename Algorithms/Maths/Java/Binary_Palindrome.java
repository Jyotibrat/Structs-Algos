import java.util.Scanner;

public class Binary_Palindrome {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number which is to be checked if it is Binary Palindrome or not: ");
        int n = sc.nextInt();

        int temp = n, reversed = 0;

        while(temp > 0){
            reversed <<= 1;
            reversed |= (temp & 1);
            temp >>= 1;
        }

        if(reversed == n){
            System.out.print(n +" is a Binary Palindrome.");
        }else{
            System.out.print(n + " is not a Binary Palindrome.");
        }

        sc.close();
    }
}

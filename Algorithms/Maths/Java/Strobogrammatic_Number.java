import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;

public class Strobogrammatic_Number{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the String: ");
        String n = sc.nextLine();

        Map<Character, Character> map = new HashMap<Character,Character>();
        map.put('8', '8');
        map.put('1', '1');
        map.put('0', '0');
        map.put('9', '6');
        map.put('6', '9');

        int l = 0, r = n.length() - 1, flag = 1;
        
        while (l <= r) {
            if(!map.containsKey(n.charAt(l))){
                System.out.println("no");
                flag = 0;
                break;
            }
            if(map.get(n.charAt(l)) != n.charAt(r)){
                System.out.println("no");
                flag = 0;
                break;
            }
            l++;
            r--;
        }
        if(flag == 1){
            System.out.println("The Entered Number is a Strobogrammatic Number.");
        }else{
            System.out.println("The Entered Number is not a Strobogrammatic Number.");
        }
        sc.close();
    }
}
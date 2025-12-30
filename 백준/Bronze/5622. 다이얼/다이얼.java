import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int sum = 0;
        HashMap<Character, Integer> map = new HashMap<>();

        map.put('A', 1); map.put('B', 1); map.put('C', 1);
        map.put('D', 2); map.put('E', 2); map.put('F', 2);
        map.put('G', 3); map.put('H', 3); map.put('I', 3);
        map.put('J', 4); map.put('K', 4); map.put('L', 4);
        map.put('M', 5); map.put('N', 5); map.put('O', 5);
        map.put('P', 6); map.put('Q', 6); map.put('R', 6); map.put('S', 6);
        map.put('T', 7); map.put('U', 7); map.put('V', 7);
        map.put('W', 8); map.put('X', 8); map.put('Y', 8); map.put('Z', 8);

        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);

            sum += map.get(c)+2;
        }

        System.out.println(sum);

        sc.close();
    }
}

import java.util.Scanner;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        String answer = "";

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            String a = sc.next();
            int b = sc.nextInt();

            map.put(a, b);

            if (b == 2026) {
                answer = a;
            }
        }

        System.out.println(answer);

        sc.close();
    }
}
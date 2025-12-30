import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        List<Integer> li = new ArrayList<>();

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                li.add(i);
            }
        }

        System.out.println(li.size() < k ? 0 : li.get(k - 1));

        sc.close();
    }
}

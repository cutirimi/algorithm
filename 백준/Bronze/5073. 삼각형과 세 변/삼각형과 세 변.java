import java.util.*;

public class Main {
    public static void main(String[] args) {
        String s = "";
        int temp[] = new int[3];
        Scanner sc = new Scanner(System.in);

        while (true) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            if (a == 0)
                break;

            temp[0] = a;
            temp[1] = b;
            temp[2] = c;

            Arrays.sort(temp);

            int max = temp[2];
            int t1 = temp[0];
            int t2 = temp[1];

            if (max >= t1 + t2) {
                s = "Invalid";
            } else if (a == b && b == c) {
                s = "Equilateral";
            } else if (a == b || b == c || c == a) {
                s = "Isosceles";
            } else {
                s = "Scalene";
            }

            System.out.println(s);
        }

        sc.close();
    }
}
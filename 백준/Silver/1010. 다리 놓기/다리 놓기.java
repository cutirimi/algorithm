import java.util.Scanner;

public class Main {
    public static long combi(long n, long r) {
        long result = 1;

        if (r > n - r) {
            r = n - r;
        }

        for (long i = 1; i <= r; i++) {
            result = result * (n - i + 1) / i;
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            long n = sc.nextInt();
            long m = sc.nextInt();

            System.out.println(combi(m, n));
        }

        sc.close();
    }
}
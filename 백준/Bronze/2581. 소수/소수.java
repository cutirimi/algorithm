import java.util.Scanner;

public class Main {
    public static boolean isPrime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        int sum = 0, min = 0;
        
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();

        for (int i = m; i <= n; i++) {
            if (isPrime(i)) {
                sum += i;
                if (min == 0) {
                    min = i;
                }
            }
        }

        if (sum == 0) {
            System.out.println(-1);
        } else {
            System.out.println(sum);
            System.out.println(min);
        }

        sc.close();
    }
}

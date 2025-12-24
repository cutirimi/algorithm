import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        int arr[] = new int[n];

        for (int x = 0; x < m; x++) {
            int i = sc.nextInt();
            int j = sc.nextInt();
            int k = sc.nextInt();

            if (x < i && x > j)
                arr[x] = 0;

            for (int a = i - 1; a <= j - 1; a++) {
                arr[a] = k;
            }
        }

        for (int b = 0; b < n; b++) {
            System.out.print(arr[b] + " ");
        }

        sc.close();
    }
}
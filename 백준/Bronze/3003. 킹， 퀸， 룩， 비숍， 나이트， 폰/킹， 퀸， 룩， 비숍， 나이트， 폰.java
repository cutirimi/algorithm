import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int ches[] = { 1, 1, 2, 2, 2, 8 };
        int dh[] = new int[6];

        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 6; i++) {
            int n = sc.nextInt();
            dh[i] = n;

            System.out.print(ches[i] - dh[i] + " ");
        }

        sc.close();
    }
}
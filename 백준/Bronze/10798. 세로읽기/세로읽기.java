import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String ans = "";
        int maxi = 0;
        String[] arr = new String[5];

        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 5; i++) {
            arr[i] = sc.next();
            maxi = Math.max(maxi, arr[i].length());
        }

        for (int i = 0; i < maxi; i++) {
            for (int j = 0; j < 5; j++) {
                if (i < arr[j].length()) {
                    ans += arr[j].charAt(i);
                }
            }
        }

        System.out.println(ans);
        
        sc.close();
    }
}
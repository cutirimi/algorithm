import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        double ans;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ans=(1+Math.pow(2, n))*(1+Math.pow(2, n));
        
        System.out.println((int)ans);

        sc.close();
    }
}

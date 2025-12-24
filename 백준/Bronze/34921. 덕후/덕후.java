import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        int t=sc.nextInt();

        System.out.println(10+2*(25-a+t)<0?0:10+2*(25-a+t));

        sc.close();
    }
}
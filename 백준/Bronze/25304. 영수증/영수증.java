import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int sum=0;

        Scanner sc = new Scanner(System.in);
        Long x=sc.nextLong();
        int n=sc.nextInt();

        for(int i=0;i<n;i++) {
            int a=sc.nextInt();
            int b=sc.nextInt();

            sum+=a*b;
        }

        System.out.println(x==sum?"Yes":"No");

        sc.close();
    }
}
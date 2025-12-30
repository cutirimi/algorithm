import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int i=2;

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        while(n>1) {
            if(n%i==0) {
                System.out.println(i);
                n/=i;
            } else {
                i++;
            }
        }

        sc.close();
    }
}
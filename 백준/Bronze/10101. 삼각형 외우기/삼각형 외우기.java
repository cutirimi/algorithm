import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String s;
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        if(a==60&&b==60&&c==60) {
            s="Equilateral";
        } else if(a+b+c==180&&(a==b||b==c||a==c)) {
            s="Isosceles";
        } else if(a+b+c!=180) {
            s="Error";
        } else {
            s="Scalene";
        }

        System.out.println(s);
        
        sc.close();
    }
}

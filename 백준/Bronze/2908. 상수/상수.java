import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();

        StringBuffer sa = new StringBuffer(a);
        String re1 = sa.reverse().toString();

        StringBuffer sb = new StringBuffer(b);
        String re2 = sb.reverse().toString();

        System.out.println(Integer.parseInt(re1) > Integer.parseInt(re2) ? re1 : re2);

        sc.close();
    }
}
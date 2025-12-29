import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String[] alph = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

        Scanner sc = new Scanner(System.in);
        String s=sc.next();

        for(String st:alph) {
            s=s.replace(st, "*");
        }

        System.out.println(s.length());

        sc.close();
    }
}
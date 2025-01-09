import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String a, b, c, answer2="";
        int answer1;
        Scanner sc=new Scanner(System.in);

        a=sc.next();
        b=sc.next();
        c=sc.next();

        answer1=Integer.valueOf(a)+Integer.valueOf(b)-Integer.valueOf(c);
        answer2=answer2+a+b;

        System.out.println(answer1);     // int type
        System.out.println(Integer.valueOf(answer2)-Integer.valueOf(c));    // String type
    }
}
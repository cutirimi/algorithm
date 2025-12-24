import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String start, end;
        Scanner sc = new Scanner(System.in);
        String s=sc.next();

        start=s.substring(0, (s.length()/2));
        end=(s.length()%2==0)?s.substring(s.length()/2, s.length()):s.substring(s.length()/2+1, s.length());

        StringBuffer sb = new StringBuffer(end);
        end = sb.reverse().toString();

        System.out.println(start.equals(end)?1:0);

        sc.close();
    }
}
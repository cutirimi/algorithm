import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int num1, mid=0, sum=0;
        String num2;

        Scanner sc = new Scanner(System.in);

        num1 = sc.nextInt();
        num2 = sc.next();

        for(int i=2, j=0;i>=0;i--) {
            char c=num2.charAt(i);
            mid = num1*Character.getNumericValue(c);
            sum+=mid*Math.pow(10, j++);

            System.out.println(mid);
            
            mid=0;
        }

        System.out.println(sum);
    }
}
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(); // 셔틀이 정문에 도착할때까지 남은 시간
        int b = sc.nextInt(); // 셔틀이 정문~공학관까지 가는데 걸리는 시간
        int c = sc.nextInt(); // 정문~공학관 걸어가는데 걸리는 시간
        int d = sc.nextInt(); // 수업 시작까지 남은 시간

        if (a + b <= d && c <= d) {
            System.out.println("~.~");
        } else if (a + b <= d) {
            System.out.println("Shuttle");
        } else if (c <= d) {
            System.out.println("Walk");
        } else {
            System.out.println("T.T");
        }

        sc.close();
    }
}
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sn[] = new int[6];     // 사이즈별 신청자수
        int n = sc.nextInt();      // 참가자수
        for (int i = 0; i < 6; i++) {
            sn[i] = sc.nextInt();
        }

        int t = sc.nextInt();      // 티셔츠 묶음수
        int p = sc.nextInt();      // 펜 묶음수
        int answer = 0;

        for (int i = 0; i < 6; i++) {
            if(sn[i]%t==0) {
                answer+=sn[i]/t;
            }
            else {
                if(sn[i]<t) {
                    answer+=1;
                }
                else {
                    answer+=sn[i]/t+1;
                }
            }
        }

        System.out.println(answer);
        System.out.println(n / p + " " + n % p);
    }
}
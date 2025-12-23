import java.util.Scanner;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<Integer> li=new ArrayList<>();
        int cnt=0;

        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();

        for(int i=0;i<n;i++) {
            int temp = sc.nextInt();
            li.add(temp);
        }

        int v=sc.nextInt();

        for(int i=0;i<n;i++) {
            if(li.get(i)==v) {
                cnt++;
            }
        }

        System.out.println(cnt);
        
        sc.close();
    }
}
import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        List<Integer> li = new ArrayList<>();

        Scanner sc = new Scanner(System.in);

        for(int i=0;i<28;i++) {
            int a=sc.nextInt();
            li.add(a);
        }

        for(int i=1;i<=30;i++) {
            if(!li.contains(i)) System.out.println(i);
        }

        sc.close();
    }
}
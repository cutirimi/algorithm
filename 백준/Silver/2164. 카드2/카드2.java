import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Deque<Integer> deque=new LinkedList<>();
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();

        for(int i=0;i<n;i++) {
            deque.add(i+1);
        }

        while(deque.size()!=1) {
            deque.remove();
            deque.add(deque.getFirst());
            deque.remove();
        }
        
        System.out.println(deque.getFirst());

        sc.close();
    }
}
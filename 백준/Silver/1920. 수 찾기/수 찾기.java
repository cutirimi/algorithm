import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        HashSet<Integer> list=new HashSet<>();

        int n=sc.nextInt();

        for(int i=0;i<n;i++) {
            int a= sc.nextInt();
            list.add(a);
        }

        int m=sc.nextInt();

        for(int i=0;i<m;i++) {
            int a= sc.nextInt();
            System.out.println((list.contains(a)?1:0));
        }
    }
}
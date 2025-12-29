import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<Integer>li=new ArrayList<>();

        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++) {
            li.add(i+1);
        }

        int m=sc.nextInt();
        for(int i=0;i<m;i++) {
            int a=sc.nextInt()-1;
            int b=sc.nextInt()-1;

            while(a<b) {
                int temp=li.get(a);
                li.set(a, li.get(b));
                li.set(b, temp);
                a++;
                b--;
            }
        }

        for(int i=0;i<li.size();i++) {
            System.out.print(li.get(i)+" ");
        }

        sc.close();
    }
}
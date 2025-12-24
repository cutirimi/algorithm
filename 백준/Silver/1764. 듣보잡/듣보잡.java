import java.util.*;

public class Main {
    public static void main(String[] args) {
        Set<String> set=new HashSet<>();
        List<String> li=new ArrayList<>();

        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();

        for(int i=0;i<n;i++) {
            String s=sc.next();

            set.add(s);
        }

        for(int i=0;i<m;i++) {
            String s=sc.next();

            if (set.contains(s)) {
                li.add(s);
            }
        }

        Collections.sort(li);

        System.out.println(li.size());
        for (String s : li) {
            System.out.println(s);
        }

        sc.close();
    }
}
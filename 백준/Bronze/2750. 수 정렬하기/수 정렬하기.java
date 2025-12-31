import java.util.*;

public class Main {
    public static void main(String[] args) {
        HashSet<Integer> set=new HashSet<>();

        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();

        for(int i=0;i<n;i++) {
            int a=sc.nextInt();
            set.add(a);
        }

        List<Integer> li = new ArrayList<>(set);
		Collections.sort(li);

        for(int i=0;i<li.size();i++) {
            System.out.println(li.get(i));
        }

        sc.close();
    }
}

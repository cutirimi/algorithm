import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x, y;       // x, y좌표
        int n=sc.nextInt();
        TreeMap<Integer, List<Integer>> list=new TreeMap<>();

        for(int i=0;i<n;i++) {
            x=sc.nextInt();
            y=sc.nextInt();

            list.putIfAbsent(x, new ArrayList<>());
            list.get(x).add(y);
        }

        for (Map.Entry<Integer, List<Integer>> entry : list.entrySet()) {
            int xKey = entry.getKey();
            List<Integer> yList = entry.getValue();

            Collections.sort(yList);

            for (int yValue : yList) {
                System.out.println(xKey + " " + yValue);
            }
        }
    }
}

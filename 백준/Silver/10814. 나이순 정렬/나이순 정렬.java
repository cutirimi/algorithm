import java.util.*;

public class Main { 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();

        Map<Integer, List<String>> info = new LinkedHashMap<>();

        for (int i = 0; i < n; i++) {
            int age = sc.nextInt();
            String name = sc.next();

            info.putIfAbsent(age, new ArrayList<>());
            info.get(age).add(name);
        }

        List<Integer> keyList = new ArrayList<>(info.keySet());
        Collections.sort(keyList);

        for (Integer key : keyList) {
            for (String name : info.get(key)) {
                System.out.println(key + " " + name);
            }
        }
    }
}

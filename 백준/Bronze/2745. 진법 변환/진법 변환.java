import java.util.*;

public class Main {
    public static void main(String[] args) {
        int sum = 0;
        HashMap<String, Integer> map = new HashMap<>();
        map.put("0", 0);
        map.put("1", 1);
        map.put("2", 2);
        map.put("3", 3);
        map.put("4", 4);
        map.put("5", 5);
        map.put("6", 6);
        map.put("7", 7);
        map.put("8", 8);
        map.put("9", 9);

        map.put("A", 10);
        map.put("G", 16);
        map.put("M", 22);
        map.put("S", 28);
        map.put("B", 11);
        map.put("H", 17);
        map.put("N", 23);
        map.put("T", 29);
        map.put("C", 12);
        map.put("I", 18);
        map.put("O", 24);
        map.put("U", 30);
        map.put("D", 13);
        map.put("J", 19);
        map.put("P", 25);
        map.put("V", 31);
        map.put("E", 14);
        map.put("K", 20);
        map.put("Q", 26);
        map.put("W", 32);
        map.put("F", 15);
        map.put("L", 21);
        map.put("R", 27);
        map.put("X", 33);
        map.put("Y", 34);
        map.put("Z", 35);

        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int n = sc.nextInt();

        for (int i = 0; i < s.length(); i++) {
            String key = String.valueOf(s.charAt(i));
            sum += map.get(key) * Math.pow(n, s.length() - 1 - i);
        }
        System.out.println(sum);

        sc.close();
    }
}
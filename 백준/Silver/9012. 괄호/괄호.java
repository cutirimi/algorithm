import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            Stack<Character> st = new Stack<>();
            boolean isValid = true;

            String s = sc.next();

            for (int j = 0; j < s.length(); j++) {
                char c = s.charAt(j);

                if (c == '(') {
                    st.push(c);
                } else {
                    if (st.isEmpty()) {
                        isValid = false;
                        break;
                    }
                    st.pop();
                }
            }

            if (!st.isEmpty())
                isValid = false;

            System.out.println(isValid ? "YES" : "NO");
        }

        sc.close();
    }
}
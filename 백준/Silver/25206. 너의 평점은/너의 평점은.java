import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        double sum = 0.0, total = 0.0;
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 20; i++) {
            String s = sc.nextLine();
            String info[] = s.split(" ");

            if (info[2].equals("P"))
                continue;

            sum += Double.parseDouble(info[1]);

            double ins = Double.parseDouble(info[1]);

            if (info[2].equals("A+"))
                total += ins * 4.5;
            else if (info[2].equals("A0"))
                total += ins * 4.0;
            else if (info[2].equals("B+"))
                total += ins * 3.5;
            else if (info[2].equals("B0"))
                total += ins * 3.0;
            else if (info[2].equals("C+"))
                total += ins * 2.5;
            else if (info[2].equals("C0"))
                total += ins * 2.0;
            else if (info[2].equals("D+"))
                total += ins * 1.5;
            else if (info[2].equals("D0"))
                total += ins * 1.0;
            else if (info[2].equals("F"))
                total += ins * 0.0;
        }

        System.out.println(String.format("%.6f", total / sum));

        sc.close();
    }
}
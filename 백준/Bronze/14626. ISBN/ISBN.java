import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int sum=0, temp=-1;
        List<String> li=new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        String s=sc.next();

        for(int i=0;i<13;i++) {
            char c=s.charAt(i);
            li.add(String.valueOf(c));
        }

        for(int i=0;i<li.size();i++) {
            if(!li.get(i).equals("*")) {
                sum+=(i%2==0)?Integer.parseInt(li.get(i))*1:Integer.parseInt(li.get(i))*3;
            } else {
                temp=i;
            }
        }

        for(int i=0;i<10;i++) {
            int tsum=sum+(temp%2==0?i*1:i*3);

            if(tsum%10==0) {
               System.out.println(i);
                break;
            }
        }

        sc.close();
    }
}
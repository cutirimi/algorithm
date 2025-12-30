import java.util.*;
import java.util.Scanner;

public class Main {
    public static String iscomplate(int n) {
        int sum=0;
        String s="";
        List<Integer> li=new ArrayList<>();

        for(int i=1;i<n;i++) {
            if(n%i==0) {
                li.add(i);
                sum+=i;
            }
        }

        if(n==sum) {
            s=String.valueOf(n)+" = ";
            for(int i=0;i<li.size();i++) {
                s+=String.valueOf(li.get(i));
                if(i<li.size()-1) {
                    s+=" + ";
                }
            }
        } else {
            s=String.valueOf(n)+" is NOT perfect.";
        }

        return s;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        while(true) {
            int n=sc.nextInt();

            if(n==-1) {
                break;
            }

            System.out.println(iscomplate(n));
        }

        sc.close();
    }
}

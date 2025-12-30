import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int temp[]=new int[3];
        
        Scanner sc = new Scanner(System.in);
        for(int i=0;i<3;i++) {
            int a=sc.nextInt();
            temp[i]=a;
        }
        
        Arrays.sort(temp);

        for(int i=temp[2];i>=1;i--) {
            if(temp[2]>=temp[0]+temp[1]) {
                temp[2]--;
            } else {
                break;
            }
        }

        System.out.println(temp[0]+temp[1]+temp[2]);

        sc.close();
    }
}

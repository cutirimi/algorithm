import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);

        String sen= s.nextLine();

        while(!sen.equals("#"))
        {
            int cnt=0;

            for(int i=0;i<sen.length();i++)
            {
                char c=sen.charAt(i);

                if (c =='e' || c == 'a' || c == 'i' || c == 'o' || c == 'u'||c =='A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                {
                    cnt++;
                }
            }

            System.out.println(cnt);

            sen= s.nextLine();
        }
    }
}
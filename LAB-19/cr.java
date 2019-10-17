import java.util.*;
class cr
{
    public static void main(String args[])
    {
        Scanner  sc = new Scanner(System.in);
        String num;
        System.out.print("enter the number :: ");
        num = sc.nextLine();
        String copy = num;
        System.out.println(num);
        int l = num.length();
        if(l % 2 == 0)
       {
            int a = l/2 -1;
            int b = a + 1;
            for(int i = 0;i<=(l/2); i++)
            {
                char x = copy.charAt(a);
                char y = copy.charAt(b);
                a--;
                b++;
                System.out.println(x);
                System.out.println(y);

                copy = copy.replace(x,' ');
                copy = copy.replace(y,' ');
            }
            System.out.println(copy);
        }
        else
        {
            int a = (l+1)/2 -1;
            for(int i = 0;i<=(l/2); i++)
            {
                //int a = (l+1)/2 -1;
                char x = copy.charAt(a);
                System.out.println(x);
                copy = copy.replace(x,' ');
            }
            System.out.println(copy);
        }
       //System.out.println(copy);
    }
}
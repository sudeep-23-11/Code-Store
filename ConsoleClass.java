//ConsoleClass
import java.io.Console;
public class ConsoleClass
{
    public static void main(String[] args)
    {
        System.out.println("Output message");
        System.err.println("Error message");
        Console c=System.console();
        String s=c.readLine();
        System.out.println(s);
        char ch[]=c.readPassword();
        s=String.valueOf(ch);
        System.out.println(s);
        c.flush();
    }
}
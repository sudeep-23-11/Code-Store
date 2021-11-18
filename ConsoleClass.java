//ConsoleClass
import java.io.Console;
public class ConsoleClass
{
    public static void main(String[] args) throws Exception
    {
        int i=System.in.read();
        System.out.println((char)i);
        System.err.println((char)i);
        Console c=System.console();
        String s=c.readLine();
        System.out.println(s);
        char ch[]=c.readPassword();
        s=String.valueOf(ch);
        System.out.println(s);
        System.out.println(c.reader());
        System.out.println(c.writer());
        c.flush();
    }
}
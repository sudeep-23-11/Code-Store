//BufferedReaderClass
import java.io.InputStreamReader;
import java.io.BufferedReader;
public class BufferedReaderClass
{
    public static void main(String[] args) throws Exception
    {
        BufferedReader Br=new BufferedReader(new InputStreamReader(System.in));
        String s=Br.readLine();
        System.out.println(s);
        int i=Integer.parseInt(Br.readLine());
        System.out.println(i);
        double f=Double.parseDouble(Br.readLine());
        System.out.println(f);
        char c=(char)(Br.read());
        System.out.println(c);
        Br.close();
    }
}
//BufferedReaderInputOutput
import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
public class BufferedReaderInputOutput
{
    public static void main(String[] args) throws IOException
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
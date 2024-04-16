//FilterStreamClass
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.BufferedInputStream;
import java.io.FilterInputStream;
import java.io.FilterOutputStream;
public class FilterStreamClass
{
    public static void main(String[] args) throws Exception
    {
        FileOutputStream fout=new FileOutputStream("./demo.txt");
        FilterOutputStream flout =new FilterOutputStream(fout);
        flout.write('X');
        String s="Hello World";
        byte b[]=s.getBytes();
        flout.write(b, 0, b.length);
        flout.flush();
        flout.close();
        fout.close();
        FileInputStream fin=new FileInputStream("./demo.txt");
        FilterInputStream flin=new BufferedInputStream(fin);
        System.out.println(flin.available());
        System.out.println((char)flin.read());
        flin.skip(0);
        System.out.println(flin.markSupported());
        flin.mark(0);
        flin.reset();
        byte c[]=new byte[b.length];
        flin.read(c, 0, c.length);
        s=new String(c);
        System.out.println(s);
        flin.close();
        fin.close();
    }
}
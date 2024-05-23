//BufferedStreamClass
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
public class BufferedStreamClass
{
    public static void main(String[] args) throws Exception
    {
        FileOutputStream fout=new FileOutputStream("./demo.txt");
        BufferedOutputStream bout=new BufferedOutputStream(fout);
        bout.write('X');
        String s="Hello World";
        byte b[]=s.getBytes();
        bout.write(b, 0, b.length);
        bout.flush();
        bout.close();
        fout.close();
        FileInputStream fin=new FileInputStream("./demo.txt");
        BufferedInputStream bin=new BufferedInputStream(fin);
        System.out.println(bin.available());
        System.out.println((char)bin.read());
        bin.skip(0);
        System.out.println(bin.markSupported());
        bin.mark(0);
        bin.reset();
        byte c[]=new byte[b.length];
        bin.read(c, 0, c.length);
        s=new String(c);
        System.out.println(s);
        bin.close();
        fin.close();
    }
}
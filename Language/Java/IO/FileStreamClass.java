//FileStreamClass
import java.io.FileInputStream;
import java.io.FileOutputStream;
public class FileStreamClass
{
    public static void main(String[] args) throws Exception
    {
        FileOutputStream fout=new FileOutputStream("./demo.txt");
        fout.write('X');
        String s="Hello World";
        byte b[]=s.getBytes();
        fout.write(b, 0, b.length);
        System.out.println(fout.getChannel());
        System.out.println(fout.getFD());
        fout.close();
        FileInputStream fin=new FileInputStream("./demo.txt");
        System.out.println(fin.available());
        System.out.println((char)fin.read());
        fin.skip(0);
        byte c[]=new byte[b.length];
        fin.read(c, 0, c.length);
        s=new String(c);
        System.out.println(s);
        System.out.println(fin.getChannel());
        System.out.println(fin.getFD());
        fin.close();
    }
}
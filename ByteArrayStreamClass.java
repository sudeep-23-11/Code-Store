//ByteArrayStreamClass
import java.io.FileOutputStream;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
public class ByteArrayStreamClass
{
    public static void main(String[] args) throws Exception
    {
        FileOutputStream fout=new FileOutputStream("./demo.txt");
        ByteArrayOutputStream byout=new ByteArrayOutputStream();
        byout.write('X');
        String s="Hello World";
        byte b[]=s.getBytes();
        byout.write(b, 0, b.length);
        byout.writeTo(fout);
        byout.flush();
        fout.close();
        byout.close();
        System.out.println(byout.size());
        System.out.println(byout.toString());
        byte buf[]=byout.toByteArray();
        ByteArrayInputStream byin=new ByteArrayInputStream(buf);
        System.out.println(byin.available());
        System.out.println((char)byin.read());
        byin.skip(0);
        System.out.println(byin.markSupported());
        byin.mark(0);
        byin.reset();
        byte c[]=new byte[b.length];
        byin.read(c, 0, c.length);
        s=new String(c);
        System.out.println(s);
        byin.close();
    }
}
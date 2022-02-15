//SequenceStreamClass
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.SequenceInputStream;
public class SequenceStreamClass
{
    public static void main(String[] args) throws Exception
    {
        FileInputStream fin1=new FileInputStream("./demo.txt");
        FileInputStream fin2=new FileInputStream("./demo.txt");
        SequenceInputStream sin=new SequenceInputStream(fin1, fin2);
        FileOutputStream fout=new FileOutputStream("./demo2.txt");
        int i;
        while((i=sin.read())!=-1)
        {
            System.out.print((char)i);
            fout.write(i);
        }
        fout.close();
        sin.close();
        fin2.close();
        fin1.close();
    }
}

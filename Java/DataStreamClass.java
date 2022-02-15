//DataStreamClass
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
public class DataStreamClass
{
    public static void main(String[] args) throws Exception
    {
        FileOutputStream fout=new FileOutputStream("./demo.txt");
        DataOutputStream dout=new DataOutputStream(fout);
        dout.write('X');
        String s="Hello World";
        byte b[]=s.getBytes();
        dout.write(b, 0, b.length);
        dout.writeByte(1);
        dout.writeBoolean(true);
        dout.writeChar('X');
        dout.writeShort((short)5);
        dout.writeInt(50);
        dout.writeLong((long)500);
        dout.writeFloat((float)0.5);
        dout.writeDouble(0.05);
        dout.writeUTF("Hello World");
        dout.flush();
        dout.close();
        fout.close();
        System.out.println(dout.size());
        FileInputStream fin=new FileInputStream("./demo.txt");
        DataInputStream din=new DataInputStream(fin);
        System.out.println(din.available());
        System.out.println((char)din.read());
        din.skip(0);
        System.out.println(din.markSupported());
        byte c[]=new byte[b.length];
        din.read(c, 0, c.length);
        s=new String(c);
        System.out.println(s);
        System.out.println(din.readByte()+" "+din.readBoolean()+" "+din.readChar());
        System.out.println(din.readShort()+" "+din.readInt()+" "+din.readLong());
        System.out.println(din.readFloat()+" "+din.readDouble());
        System.out.println(din.readUTF());
        din.close();
        fin.close();
    }
}
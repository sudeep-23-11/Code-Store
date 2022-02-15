//SocketClass
import java.net.Socket;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.util.Scanner;
public class SocketClass
{
    public static void main(String[] args) throws Exception
    {
        Socket s=new Socket("localhost", 5000);
        DataInputStream din =new DataInputStream(s.getInputStream());
        DataOutputStream dout=new DataOutputStream(s.getOutputStream());
        Scanner Sc=new Scanner(System.in);
        dout.writeUTF(Sc.nextLine());
        dout.flush();
        System.out.println((String)din.readUTF());
        Sc.close();
        dout.close();
        din.close();
        s.close();
    }
}
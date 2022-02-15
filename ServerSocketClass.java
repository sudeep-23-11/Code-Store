//ServerSocketClass
import java.net.Socket;
import java.net.ServerSocket;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.util.Scanner;
public class ServerSocketClass
{
    public static void main(String[] args) throws Exception
    {
        ServerSocket ss=new ServerSocket(5000);
        Socket s=ss.accept();
        DataInputStream din =new DataInputStream(s.getInputStream());
        DataOutputStream dout=new DataOutputStream(s.getOutputStream());
        System.out.println((String)din.readUTF());
        Scanner Sc=new Scanner(System.in);
        dout.writeUTF(Sc.nextLine());
        dout.flush();
        Sc.close();
        dout.close();
        din.close();
        s.close();
        ss.close();
    }
}
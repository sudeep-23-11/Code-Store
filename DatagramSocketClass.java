//DatagramSocketClass
import java.net.DatagramSocket;
import java.net.DatagramPacket;
import java.net.InetAddress;
import java.util.Scanner;
public class DatagramSocketClass
{
    public static void main(String[] args) throws Exception
    {
        DatagramSocket ds=new DatagramSocket(5500);
        Scanner Sc=new Scanner(System.in);
        String s=Sc.nextLine();
        InetAddress ip=InetAddress.getByName("localhost");
        DatagramPacket dp=new DatagramPacket(s.getBytes(), s.length(), ip, 5000);
        ds.send(dp);
        System.out.println(ds.isConnected()+" "+ds.isBound()+" "+ds.isClosed());
        System.out.println(ds.getSendBufferSize());
        System.out.println(ds.getClass()+" "+ds.getPort()+" "+ds.getLocalPort());
        System.out.println(ds.getInetAddress()+" "+ds.getLocalAddress()+" "+ds.getLocalSocketAddress());
        System.out.println(ds.toString());
        byte buf[]=new byte[1024];
        dp=new DatagramPacket(buf, 1024);
        ds.receive(dp);
        System.out.println(ds.getReceiveBufferSize());
        s=new String(dp.getData(), 0, dp.getLength());
        System.out.println(s);
        Sc.close();
        ds.close();
    }
}
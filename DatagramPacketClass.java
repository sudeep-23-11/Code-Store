//DatagramPacketClass
import java.net.DatagramSocket;
import java.net.DatagramPacket;
import java.net.InetAddress;
import java.util.Scanner;
public class DatagramPacketClass
{
    public static void main(String[] args) throws Exception
    {
        DatagramSocket ds=new DatagramSocket(5000);
        byte buf[]=new byte[1024];
        DatagramPacket dp=new DatagramPacket(buf, 1024);
        ds.receive(dp);
        String s=new String(dp.getData(), 0, dp.getLength());
        System.out.println(s);
        System.out.println(dp.getClass()+" "+dp.getPort()+" "+dp.getOffset());
        System.out.println(dp.getAddress()+" "+dp.getSocketAddress());
        System.out.println(dp.toString());
        Scanner Sc=new Scanner(System.in);
        s=Sc.nextLine();
        InetAddress ip=InetAddress.getByName("localhost");
        dp=new DatagramPacket(s.getBytes(), s.length(), ip, 5500);
        ds.send(dp);
        Sc.close();
        ds.close();
    }
}
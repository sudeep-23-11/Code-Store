//InetAddressClass
import java.net.InetAddress;
public class InetAddressClass
{
    public static void main(String[] args)
    {
        try
        {
            InetAddress ip=InetAddress.getByName("www.w3schools.com");
            System.out.println(ip.getClass()+" "+ip.getHostName());
            System.out.println(ip.getAddress()+" "+ip.getHostAddress());
            System.out.println(ip.toString());
            System.out.println(InetAddress.getLocalHost());
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
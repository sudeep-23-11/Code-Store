//URLClass
import java.net.URL;
public class URLClass
{
    public static void main(String[] args) throws Exception
    {
        URL url=new URL("https://www.w3schools.com/js/default.asp");
        System.out.println(url.getProtocol()+" "+url.getHost()+" "+url.getPort());
        System.out.println(url.getFile()+" "+url.getAuthority()+" "+url.getDefaultPort());
        System.out.println(url.getPath()+" "+url.getQuery()+" "+url.getRef());
        System.out.println(url.getContent());
        System.out.println(url.toString());
        System.out.println(url.toURI());
    }
}
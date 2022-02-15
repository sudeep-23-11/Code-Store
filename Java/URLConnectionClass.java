//URLConnectionClass
import java.net.URL;
import java.net.URLConnection;
public class URLConnectionClass
{
    public static void main(String[] args) throws Exception
    {
        URL url=new URL("https://www.w3schools.com/js/default.asp");
        URLConnection uc=url.openConnection();
        uc.connect();
        System.out.println(uc.getAllowUserInteraction());
        System.out.println(uc.getConnectTimeout());
        System.out.println(uc.getContentLength());
        System.out.println(uc.getContentType());
        System.out.println(uc.getContentEncoding());
        System.out.println(uc.getContent());
    }
}
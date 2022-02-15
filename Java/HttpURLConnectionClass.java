//HttpURLConnectionClass
import java.net.URL;
import java.net.HttpURLConnection;
public class HttpURLConnectionClass
{
    public static void main(String[] args) throws Exception
    {
        URL url=new URL("https://www.w3schools.com/js/default.asp");
        HttpURLConnection huc=(HttpURLConnection)url.openConnection();
        huc.connect();
        System.out.println(huc.getAllowUserInteraction());
        System.out.println(huc.getConnectTimeout());
        System.out.println(huc.getContentLength());
        System.out.println(huc.getContentType());
        System.out.println(huc.getContentEncoding());
        System.out.println(huc.getContent());
        System.out.println(huc.getRequestMethod());
        System.out.println(huc.getPermission());
        System.out.println(huc.getInstanceFollowRedirects());
        System.out.println(HttpURLConnection.getFollowRedirects());
        int i;
        for(i=0;i<10;i++)
        System.out.println(huc.getHeaderField(i)+" "+huc.getHeaderField(i));
        huc.disconnect();
    }
}

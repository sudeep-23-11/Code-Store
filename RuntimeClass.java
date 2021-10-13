//RuntimeClass
import java.io.IOException;
class UserDefinedThread extends Thread
{
    public void run()
    {
        System.out.println("Shutdown Hook completed");
    }
}
public class RuntimeClass
{
    public static void main(String[] args) throws IOException
    {
        Runtime r=Runtime.getRuntime();
        System.out.println("Avaliable Processors "+r.availableProcessors());
        System.out.println("Total Memory "+r.totalMemory());
        System.out.println("Free Memory "+r.freeMemory());
        int i;
        for(i=1;i<=10000;i++)
        new RuntimeClass();
        System.out.println("Free Memory "+r.freeMemory());
        System.gc();
        System.out.println("Free Memory "+r.freeMemory());
        r.exec("notepad");
        r.addShutdownHook(new UserDefinedThread());
        try{Thread.sleep(5000);}
        catch(InterruptedException e){System.out.println(e);}
    }
}

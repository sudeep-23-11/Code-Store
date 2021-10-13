//ThreadPools
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
class UserDefinedThread implements Runnable
{
    private int i;

    public UserDefinedThread(int i)
    {
        this.i=i;
    }
    public void run()
    {
        System.out.println(Thread.currentThread().getName()+" start of i= "+i);
        try{Thread.sleep(2000);}
        catch(InterruptedException e){System.out.println(e);}
        System.out.println(Thread.currentThread().getName()+" end of i= "+i);
    }
}
public class ThreadPools
{
    public static void main(String[] args)
    {
        ExecutorService executor=Executors.newFixedThreadPool(5);
        int i;
        for(i=1;i<=10;i++)
        {
            UserDefinedThread th=new UserDefinedThread(i);
            executor.execute(th);
        }
        executor.shutdown();
        while(!executor.isTerminated()){}
    }
}

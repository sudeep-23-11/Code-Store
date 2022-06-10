//Function
class UserDefinedThread implements Runnable
{
    public void run()
    {
        if(Thread.currentThread().isAlive())
        System.out.println(Thread.currentThread().getName()+" "+Thread.currentThread().getId()+" "+Thread.currentThread().getPriority());
        if(Thread.currentThread().isDaemon())
        System.out.println("Daemon Thread");
        else
        System.out.println("User Thread");
        if(Thread.currentThread().isInterrupted())
        System.out.println("Interrupted Thread");
        else
        System.out.println("Normal Thread");
        try{Thread.sleep(500);}
        catch(InterruptedException e){System.out.println(e);}
    }
}
public class Function
{
    public static void main(String[] args)
    {
        UserDefinedThread th=new UserDefinedThread();
        Thread t1=new Thread(th, "First Thread");
        t1.setPriority(Thread.MAX_PRIORITY);
        Thread t2=new Thread(th);
        t2.setName("Second Thread");
        t2.setPriority(1);
        t2.setDaemon(true);
        t1.start();
        t1.interrupt();
        try{t1.join(2000);}
        catch(InterruptedException e){System.out.println(e);}
        t2.start();
        try{t2.join(2000);}
        catch(InterruptedException e){System.out.println(e);}
    }
}
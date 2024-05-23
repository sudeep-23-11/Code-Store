//Group
class UserDefinedThread implements Runnable
{
    public void run()
    {
        System.out.println("Running "+Thread.currentThread().getName());
    }
}
public class Group
{
    public static void main(String[] args)
    {
        UserDefinedThread th=new UserDefinedThread();
        ThreadGroup tg=new ThreadGroup("Grandparent Thread");
        ThreadGroup tp=new ThreadGroup(tg, "Parent Thread");
        tp.setMaxPriority(Thread.NORM_PRIORITY);
        Thread t1=new Thread(tp, th, "First Thread");
        Thread t2=new Thread(tp, th, "Second Thread");
        System.out.println(tp.getParent()+" "+tp.getMaxPriority());
        t1.start();
        t2.start();
        System.out.println(tg.activeGroupCount()+" "+tg.activeCount());
        tg.list();
        tg.destroy();
        System.out.println(tg.isDestroyed());
    }
}
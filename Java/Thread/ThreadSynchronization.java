//ThreadSynchronization
class data
{
    public synchronized void print1()
    {
        synchronized(this)
        {
            int i;
            for(i=1;i<=10;i++)
            System.out.println(i);
        }
    }
    public synchronized static void print2()
    {
        synchronized(data.class)
        {
            int i;
            for(i=1;i<=10;i++)
            System.out.println(i);
        }
    }
    public synchronized void print3()
    {
        try{wait(500);}
        catch(InterruptedException e){System.out.println(e);}
        System.out.println("Hello");
    }
    public synchronized void print4()
    {
        System.out.println("World");
        notify();
    }
}
public class ThreadSynchronization
{
    public static void main(String[] args)
    {
        data d1=new data();
        data d2=new data();
        Thread t1=new Thread()
        {
            public void run()
            {d1.print1();}
        };
        Thread t2=new Thread()
        {
            public void run()
            {d1.print1();}
        };
        t1.start();
        t2.start();
        try{t1.join(2000);}
        catch(InterruptedException e){System.out.println(e);}
        try{t2.join(2000);}
        catch(InterruptedException e){System.out.println(e);}
        Thread t3=new Thread()
        {
            public void run()
            {data.print2();}
        };
        Thread t4=new Thread()
        {
            public void run()
            {data.print2();}
        };
        t3.start();
        t4.start();
        try{t3.join(2000);}
        catch(InterruptedException e){System.out.println(e);}
        try{t4.join(2000);}
        catch(InterruptedException e){System.out.println(e);}
        Thread t5=new Thread()
        {
            public void run()
            {d2.print3();}
        };
        Thread t6=new Thread()
        {
            public void run()
            {d2.print4();}
        };
        t5.start();
        t6.start();
    }
}
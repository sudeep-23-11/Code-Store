//Deadlocks
public class Deadlocks
{
    public static void main(String[] args)
    {
        String r1="Resource 1";
        String r2="Resource 2";
        Thread t1=new Thread()
        {
            public void run()
            {
                synchronized(r1)
                {
                    System.out.println("Locking "+r1);
                    try{Thread.sleep(100);}
                    catch(InterruptedException e){System.out.println(e);}
                    synchronized(r2)
                    {
                        System.out.println("Locking "+r2);
                    }
                }
            }
        };
        Thread t2=new Thread()
        {
            public void run()
            {
                synchronized(r2)
                {
                    System.out.println("Locking "+r2);
                    try{Thread.sleep(100);}
                    catch(InterruptedException e){System.out.println(e);}
                    synchronized(r1)
                    {
                        System.out.println("Locking "+r1);
                    }
                }
            }
        };
        t1.start();
        t2.start();
    }
}
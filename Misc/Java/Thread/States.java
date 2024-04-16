//States
class UserDefinedThread extends Thread
{
    public void run()
    {
        int i;
        for(i=1;i<=5;i++)
        {
            try{Thread.sleep(500);}
            catch(InterruptedException e){System.out.println(e);}
            System.out.println(i);
        }
    }
}
public class States
{
    public static void main(String[] args)
    {
        UserDefinedThread t1=new UserDefinedThread();
        UserDefinedThread t2=new UserDefinedThread();
        UserDefinedThread t3=new UserDefinedThread();
        System.out.println(t1.getState()+" "+t2.getState()+" "+t3.getState());
        t1.start();
        System.out.println(t1.getState()+" "+t2.getState()+" "+t3.getState());
        try{t1.join(2000);}
        catch(InterruptedException e){System.out.println(e);}
        System.out.println(t1.getState()+" "+t2.getState()+" "+t3.getState());
        t2.start();
        System.out.println(t1.getState()+" "+t2.getState()+" "+t3.getState());
        t2.suspend();
        System.out.println(t1.getState()+" "+t2.getState()+" "+t3.getState());
        t2.resume();
        System.out.println(t1.getState()+" "+t2.getState()+" "+t3.getState());
        t3.run();
        System.out.println(t1.getState()+" "+t2.getState()+" "+t3.getState());
        t3.stop();
        System.out.println(t1.getState()+" "+t2.getState()+" "+t3.getState());
    }    
}

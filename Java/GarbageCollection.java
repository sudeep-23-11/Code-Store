//GarbageCollection
public class GarbageCollection
{
    public void finalize()
    {
        System.out.println("Garbage collected");
    }
    public static void main(String[] args)
    {
        GarbageCollection g1=new GarbageCollection();
        g1=null;
        GarbageCollection g2=new GarbageCollection();
        GarbageCollection g3=new GarbageCollection();
        g2=g3;
        new GarbageCollection();
        System.gc();
    }
}
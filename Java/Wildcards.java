//Wildcards
import java.util.ArrayList;
import java.util.Iterator;
public class Wildcards
{
    public static void upperbound(ArrayList<? extends Number> lis)
    {
        Iterator<? extends Number> it=lis.iterator();
        while(it.hasNext())
        System.out.print(it.next()+" ");
        System.out.println();
    }
    public static void unbound(ArrayList<?> lis)
    {
        Iterator<?> it=lis.iterator();
        while(it.hasNext())
        System.out.print(it.next()+" ");
        System.out.println();
    }
    public static void lowerbound(ArrayList<? super Integer> lis)
    {
        Iterator<? super Integer> it=lis.iterator();
        while(it.hasNext())
        System.out.print(it.next()+" ");
        System.out.println();
    }
    public static void main(String[] args)
    {
        ArrayList<Integer> lis1=new ArrayList<Integer>();
        lis1.add(5);
        lis1.add(10);
        ArrayList<Number> lis2=new ArrayList<Number>();
        lis2.add(22.44);
        lis2.add(33.66);
        upperbound(lis1);
        upperbound(lis2);
        unbound(lis1);
        unbound(lis2);
        lowerbound(lis1);
        lowerbound(lis2);
    }
}
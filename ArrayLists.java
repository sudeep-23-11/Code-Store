//ArrayLists
import java.util.ArrayList;
import java.util.Iterator;
public class ArrayLists
{
    public static void main(String[] args)
    {
        ArrayList<Integer> lis=new ArrayList<Integer>();
        lis.add(5);
        lis.add(10);
        System.out.print(lis.get(0)+" "+lis.get(1));
        System.out.println();
        Iterator<Integer> it=lis.iterator();
        while(it.hasNext())
        System.out.print(it.next()+" ");
        System.out.println();
    }
}
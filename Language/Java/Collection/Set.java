//Set
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.TreeSet;
public class Set {
    public static void main(String[] args) {
        HashSet<Integer>HS=new HashSet<>();
        HS.add(-10);
        HS.add(10);
        HS.add(10);
        HS.remove(-10);
        System.out.println(HS.contains(10));
        System.out.println(HS.isEmpty()+" "+HS.size());
        HS.clear();

        LinkedHashSet<Integer>LS=new LinkedHashSet<>();
        LS.addFirst(-10);
        LS.addLast(10);
        System.out.println(LS.getFirst()+" "+LS.getLast());
        LS.removeFirst();
        LS.removeLast();
        
        TreeSet<Integer>TS=new TreeSet<>();
        TS.add(-10);
        TS.add(10);
        System.out.println(TS.first()+" "+TS.last());
        System.out.println(TS.lower(-5)+" "+TS.higher(5));
        System.out.println(TS.floor(-10)+" "+TS.ceiling(10));
        System.out.println(TS.pollFirst()+" "+TS.pollLast());
    }
}
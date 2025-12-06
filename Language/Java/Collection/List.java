//List
import java.util.ArrayList;
import java.util.LinkedList;
public class List {
    public static void main(String[] args) {
        ArrayList<Integer>AL=new ArrayList<>();
        AL.add(0);
        AL.add(0, -10);
        AL.set(1, 10);
        System.out.println(AL.get(0));
        AL.remove(0);
        System.out.println(AL.contains(10)+" "+AL.indexOf(10)+" "+AL.lastIndexOf(10));
        System.out.println(AL.isEmpty()+" "+AL.size());
        AL.clear();
        
        LinkedList<Integer>LL=new LinkedList<>();
        LL.addFirst(-10);
        LL.addLast(10);
        System.out.println(LL.getFirst()+" "+LL.getLast());
        LL.removeFirst();
        LL.removeLast();
        LL.removeFirstOccurrence(-10);
        LL.removeFirstOccurrence(10);
    }
}
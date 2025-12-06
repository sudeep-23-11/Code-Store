//Queue
import java.util.PriorityQueue;
import java.util.ArrayDeque;
public class Queue {
    public static void main(String[] args) {
        PriorityQueue<Integer>PQ=new PriorityQueue<>();
        PQ.add(-10);
        PQ.offer(10);
        PQ.remove(-10);
        System.out.println(PQ.contains(10));
        System.out.println(PQ.isEmpty()+" "+PQ.size());
        System.out.println(PQ.peek()+" "+PQ.poll());
        PQ.clear();

        ArrayDeque<Integer>DQ=new ArrayDeque<>();
        DQ.addFirst(-10);
        DQ.addLast(10);
        System.out.println(DQ.getFirst()+" "+DQ.getLast());
        DQ.removeFirst();
        DQ.removeLast();
        DQ.removeFirstOccurrence(-10);
        DQ.removeFirstOccurrence(10);
        DQ.offerFirst(-10);
        DQ.offerLast(10);
        System.out.println(DQ.peekFirst()+" "+DQ.peekLast());
        System.out.println(DQ.pollFirst()+" "+DQ.pollLast());
        DQ.push(0);
        DQ.pop();
    }
}
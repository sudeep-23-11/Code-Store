//Map
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.TreeMap;
public class Map {
    public static void main(String[] args) {
        HashMap<String, Integer>HM=new HashMap<>();
        HM.put("Y", 0);
        HM.put("X", -10);
        HM.replace("Y", 10);
        System.out.println(HM.get("X"));
        HM.remove("X");
        System.out.println(HM.containsKey("Y")+" "+HM.containsValue(10));
        System.out.println(HM.isEmpty()+" "+HM.size());
        HM.clear();

        LinkedHashMap<String, Integer>LM=new LinkedHashMap<>();
        LM.putFirst("X", -10);
        LM.putLast("Y", 10);
        for (String x: LM.keySet())
        System.out.print(x+" ");
        System.out.println();
        for (int x: LM.values())
        System.out.print(x+" ");
        System.out.println();
        System.out.println(LM.firstEntry()+" "+LM.lastEntry());
        System.out.println(LM.pollFirstEntry()+" "+LM.pollLastEntry());
        
        TreeMap<String, Integer>TM=new TreeMap<>();
        TM.put("X", -10);
        TM.put("Y", 10);
        System.out.println(TM.firstKey()+" "+TM.lastKey());
        System.out.println(TM.lowerEntry("XX")+" "+TM.higherEntry("XX"));
        System.out.println(TM.lowerKey("XX")+" "+TM.higherKey("XX"));
        System.out.println(TM.floorEntry("X")+" "+TM.ceilingEntry("Y"));
        System.out.println(TM.floorKey("X")+" "+TM.ceilingKey("Y"));
        System.out.println(TM.pollFirstEntry()+" "+TM.pollLastEntry());
    }
}
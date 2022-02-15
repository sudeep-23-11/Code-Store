//Maps
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.Iterator;
public class Maps
{
    public static void main(String[] args)
    {
        Map<String, Integer> mp=new HashMap<String,Integer>();
        mp.put("Sudeep", 5);
        mp.put("Srivastava", 10);
        Set<Map.Entry<String, Integer>> st=mp.entrySet();
        Iterator<Map.Entry<String, Integer>> it=st.iterator();
        while(it.hasNext())
        {
            Map.Entry e=it.next();
            System.out.println(e.getKey()+" "+e.getValue());
        }
    }
}
//General
public class General {
    public static void main(String[] args) {
        int[] A=new int[2];
        int[] B={1, 2, 3};
        System.out.println(A.length);
        for (int x: B)
        System.out.print(x+" ");
        System.out.println();

        String S="sudeep";
        String T="SUDEEP";
        String U="   sud   eep   ";
        String V="su de ep";
        System.out.println(S.charAt(1)+" "+S.substring(2, 4));
        System.out.println(S.contains("e")+" "+S.indexOf("e")+" "+S.lastIndexOf("e"));
        System.out.println(S.startsWith("s")+" "+S.endsWith("p"));
        System.out.println(S.replace("ee", "i"));
        System.out.println(S.isBlank()+" "+S.isEmpty()+" "+S.length());
        System.out.println(S.toUpperCase()+" "+T.toLowerCase());
        System.out.println(S.equals(T)+" "+S.equalsIgnoreCase(T));
        System.out.println(S.compareTo(T)+" "+S.compareToIgnoreCase(T));
        System.out.println(S.concat(T)+" "+S.repeat(2));
        System.out.println(U.strip()+" "+U.stripLeading()+" "+U.stripTrailing());
        for (String x: V.split(" "))
        System.out.print(x+" ");
        System.out.println();
    }
}
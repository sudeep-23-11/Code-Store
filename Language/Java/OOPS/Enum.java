//Enum
enum Level {
    low(1),
    medium(2),
    high(3);

    public int val;
    Level(int val) {
        this.val=val;
    }
    public int getVal() {
        return this.val;
    }
}

public class Enum {
    public static void main(String[] args) {
        Level l=Level.low;
        Level m=Level.medium;
        Level h=Level.valueOf("high");
        System.out.println(l.getVal()+" "+m.name()+" "+h);

        for (Level x: Level.values())
        System.out.print(x+" ");
        System.out.println();
    }
}
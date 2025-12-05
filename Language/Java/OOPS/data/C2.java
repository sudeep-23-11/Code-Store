package data;
public class C2 {
    public void mainY() {
        C1 obj=new C1(10);
        obj.setY(3);
        System.out.println(obj.y);
    }

    public void sum(char ch) {
        System.out.println(ch);
    }
    public void sum(int x, int y) {
        System.out.println((x+y));
    }
    public void sum(double x, double y) {
        System.out.println((x+y));
    }
}
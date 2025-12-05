package data;
public class C1 {
    protected int x;
    int y;
    private int z;
    
    protected void setX(int x) {
        this.x=x;
    }
    void setY(int y) {
        this.y=y;
    }
    private void setZ(int z) {
        this.z=z;
    }

    public void mainZ() {
        setZ(2);
        System.out.println(z);
    }

    public C1(int k) {
        System.out.println(k*2);
    }
    public double a=2.3;
    public void display() {
        System.out.println(a);
    }
}
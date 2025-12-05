package data;
public interface I1 {
    public static final double amt=0.1;
    
    public default double getAmt() {
        return amt;
    }
    public void display();
}
//Inheritance
import data.*;
final class C3 extends C1 {
    public void mainX() {
        setX(5);
        System.out.println(x);
    }

    public C3(int k) {
        super(k);
        System.out.println(k*3);
    }
    public double a=4.6;
    public void display() {
        super.display();
        System.out.println(super.a+" "+a);
    }

    public final char ch = 'x';
    public final void print() {
        // ch='y';
        System.out.println(ch);
    }
}
// class C4 extends C3 {
//     public void print() {}
// }

public class Inheritance {
    public static void main(String[] args) {
        C1 obj1=new C1(10);
        C2 obj2=new C2();
        C3 obj3=new C3(10);

        obj3.mainX();
        obj2.mainY();
        obj3.mainZ();

        obj2.sum('x');
        obj2.sum(2, 3);
        obj2.sum(2.3, 4.6);
        obj1.display();
        obj3.display();
    }
}
//Abstraction
import data.*;
interface I2 {
    public void print();
}
class C5 extends AC {
    public void display() {
        System.out.println(this.id);
    }
}
class C6 implements I1, I2 {
    public void display() {
        System.out.println(amt);
    }
    public void print() {
        System.out.println("Hello Java");
    }
}

public class Abstraction {
    public static void main(String[] args) {
        C5 obj1=new C5();
        C6 obj2=new C6();

        System.out.println(obj1.getId());
        obj1.display();

        System.out.println(obj2.getAmt());
        obj2.display();
        obj2.print();
    }
}
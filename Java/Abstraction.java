//Abstraction
import java.util.Scanner;
interface Grandparent
{
    void receivedata();
}
abstract class Parent implements Grandparent
{
    protected int data;

    public void receivedata()
    {
        Scanner Sc=new Scanner(System.in);
        data=Sc.nextInt();
        Sc.close();
    }
    public abstract int senddata();
}
class Child extends Parent
{
    public int senddata()
    {
        return data;
    }
}
public class Abstraction
{
    public static void main(String[] args)
    {
        Child c=new Child();
        c.receivedata();
        System.out.println(c.senddata());
    }
}
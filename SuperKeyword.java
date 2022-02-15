//SuperKeyword
class Parent
{
    protected int x;

    public Parent(int y)
    {
        x=y;
        System.out.println("Inside the Parent constructor of the object");
    }
    public void display()
    {
        System.out.println("Inside the Display method of the Parent");
    }
}
class Child extends Parent
{
    private int x;

    public Child(int y)
    {
        super(y*2);
        x=y;
        System.out.println("Inside the Child constructor of the object");
    }
    public void display()
    {
        super.display();
        System.out.println("Inside the Display method of the Child");
        System.out.println("The value of x of the Parent is "+super.x);
        System.out.println("The value of x of the Child is "+x);
    }
}
public class SuperKeyword
{
    public static void main(String[] args)
    {
        Child c=new Child(10);
        c.display();
    }
}
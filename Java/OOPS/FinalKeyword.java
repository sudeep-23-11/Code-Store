//FinalKeyword
final class data
{
    private final int x;

    public data(int y)
    {
        x=y;
        System.out.println("Data class cannot be inherited");
    }
    public final void display()
    {
        System.out.println("Display method cannot be overridden");
        System.out.println("The value of "+x+" cannot be changed");
    }
}
public class FinalKeyword
{
    public static void main(String[] args)
    {
        data d=new data(10);
        d.display();
    }
}
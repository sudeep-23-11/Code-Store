//MultipleInheritance
interface ParentA
{
    void sum();
    void display();
}
interface ParentB
{
    void diff();
    void display();
}
class Child implements ParentA, ParentB
{
    private double i, j, s, d;

    public Child(double x, double y)
    {
        i=x;
        j=y;
    }
    public void sum()
    {
        s=i+j;
    }
    public void diff()
    {
        if(i>=j)
        d=i-j;
        else
        d=j-i;
    }
    public void display()
    {
        System.out.println(s+" "+d);
    }
}
public class MultipleInheritance 
{
    public static void main(String[] args)
    {
        Child c=new Child(22.44, 33.66);
        c.sum();
        c.diff();
        c.display();
    }
}
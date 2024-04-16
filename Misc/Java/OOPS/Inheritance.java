//Inheritance
class Parent
{
    protected double i, j;

    protected double sum()
    {
        double s;
        s=i+j;
        return s;
    }
    protected double diff()
    {
        double d;
        if(i>=j)
        d=i-j;
        else
        d=j-i;
        return d;
    }

    public Parent(double x, double y)
    {
        i=x;
        j=y;
    }
    public void display()
    {
        System.out.println("This function is adding and subtracting two numbers");
        System.out.println(i+" "+j);
    }
    public void AS()
    {
        System.out.println(sum()+" "+diff());
    }
}
class Child extends Parent
{
    private double k, l;

    protected double pro()
    {
        double p;
        p=k*l;
        return p;
    }
    protected double quo()
    {
        double q;
        if(k>=l)
        q=k/l;
        else
        q=l/k;
        return q;
    }

    public Child(double x, double y)
    {
        super(x, y);
        k=x;
        l=y;
    }
    public void display()
    {
        System.out.println("This function is adding, subtracting, multiplying and dividing two numbers");
        System.out.println(k+" "+l);
    }
    public void ASMD()
    {
        System.out.println(sum()+" "+diff());
        System.out.println(pro()+" "+quo());
    }
}
public class Inheritance
{
    public static void main(String[] args)
    {
        Parent p=new Parent(22.44, 33.66);
        Child c=new Child(22.44, 33.66);
        Parent ptr=new Child(22.44, 33.66);
        p.display();
        p.AS();
        c.display();
        c.ASMD();
        ptr.display();
        ptr.AS();
    }
}
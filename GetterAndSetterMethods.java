//GetterAndSetterMethods
class data
{
    private String name;

    public data(String s)
    {
        name=s;
    }
    public String getname()
    {
        return name;
    }
    public void setname(String s)
    {
        this.name=s;
    }
}
public class GetterAndSetterMethods
{
    public static void main(String[] args)
    {
        data d=new data("Sudeep");
        System.out.println(d.getname());
        d.setname("Kumar");
        System.out.println(d.getname());
    }
}
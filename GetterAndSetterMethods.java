//GetterAndSetterMethods
class data
{
    private String name;

    public data(String name)
    {
        this.name=name;
    }
    public String getName()
    {
        return name;
    }
    public void setName(String name)
    {
        this.name=name;
    }
}
public class GetterAndSetterMethods
{
    public static void main(String[] args)
    {
        data d=new data("Sudeep");
        System.out.println(d.getName());
        d.setName("Srivastava");
        System.out.println(d.getName());
    }
}
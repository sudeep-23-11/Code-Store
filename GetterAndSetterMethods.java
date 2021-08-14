//GetterAndSetterMethods
class gasm
{
    private String name;

    String getName()
    {
        return name;
    }
    void setName(String newName)
    {
        this.name=newName;
    }
}
public class GetterAndSetterMethods
{
    public static void main(String[] args)
    {
        gasm g1=new gasm();
        g1.setName("Sudeep");
        String s=g1.getName();
        System.out.println(s);
    }
}
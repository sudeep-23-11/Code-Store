//Constructors
import java.util.Scanner;
class data
{
    private int i, j;

    public data()
    {
        System.out.println("Inside the Default datatructor of the object");
        Scanner Sc=new Scanner(System.in);
        i=Sc.nextInt();
        j=Sc.nextInt();
        Sc.close();
    }
    public data(int k, int l)
    {
        System.out.println("Inside the Parameterized datatructor of the object");
        i=k;
        j=l;
    }
    public void display()
    {
        System.out.println("The value of i is "+i);
        System.out.println("The value of j is "+j);
    }
}
public class Constructors
{
    public static void main(String[] args)
    {
        data d1=new data();
        data d2=new data(10, 5);
        d1.display();
        d2.display();
    }
}
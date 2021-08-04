//Constructors
import java.util.Scanner;
class data
{
    int i, j;

    data()
    {
        System.out.println("Inside the Default Constructor of the object");
        Scanner Sc=new Scanner(System.in);
        i=Sc.nextInt();
        j=Sc.nextInt();
    }
    data(int k, int l)
    {
        System.out.println("Inside the Parameterized Constructor of the object");
        i=k;
        j=l;
    }
    void display()
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
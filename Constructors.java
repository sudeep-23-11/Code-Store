//Constructors
import java.util.Scanner;
class cons
{
    int i, j;

    cons()
    {
        System.out.println("Inside the Default Constructor of the object");
        Scanner Sc=new Scanner(System.in);
        i=Sc.nextInt();
        j=Sc.nextInt();
        Sc.close();
    }
    cons(int k, int l)
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
        cons c1=new cons();
        cons c2=new cons(10, 5);
        c1.display();
        c2.display();
    }
}
//ClassAndObject
import java.util.Scanner;
class rectangle
{
    private double len, bre;

    public static int count=0;

    public void setdata(double l, double b)
    {
        len=l;
        bre=b;
    }
    public void getdata()
    {
        Scanner Sc=new Scanner(System.in);
        len=Sc.nextDouble();
        bre=Sc.nextDouble();
        Sc.close();
    }
    public void displaydata()
    {
        count++;
        System.out.println(count+" : "+len+" "+bre);
    }
    public void area()
    {
        double area;
        area=len*bre;
        System.out.println(area);
    }
    public void peri()
    {
        double peri;
        peri=(len+bre)*2;
        System.out.println(peri);
    }
    public static void resetcount()
    {
        count=0;
    }
}
public class ClassAndObject
{
    public static void main(String[] args)
    {
        rectangle r1=new rectangle();
        rectangle r2=new rectangle();
        r1.setdata(22.44, 33.66);
        r1.displaydata();
        r1.area();
        r1.peri();
        r2.getdata();
        r2.displaydata();
        r2.area();
        r2.peri();
        System.out.println(rectangle.count);
        rectangle.resetcount();
    }
}

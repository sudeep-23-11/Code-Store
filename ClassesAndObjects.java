//ClassesAndObjects
import java.util.Scanner;
class rectangle
{
    double len, bre;

    void setdata(double l, double b)
    {
        len=l;
        bre=b;
    }
    void getdata()
    {
        Scanner Sc=new Scanner(System.in);
        len=Sc.nextDouble();
        bre=Sc.nextDouble();
        Sc.close();
    }
    void displaydata()
    {
        System.out.println(len+" "+bre);
    }
    void area()
    {
        double area;
        area=len*bre;
        System.out.println(area);
    }
    void peri()
    {
        double peri;
        peri=(len+bre)*2;
        System.out.println(peri);
    }
}
public class ClassesAndObjects
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
    }
}
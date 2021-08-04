//ClassesAndObjects
import java.util.Scanner;
class rectangle
{
    float len, bre;

    void setdata(float l, float b)
    {
        len=l;
        bre=b;
    }
    void getdata()
    {
        Scanner Sc=new Scanner(System.in);
        len=Sc.nextFloat();
        bre=Sc.nextFloat();
    }
    void displaydata()
    {
        System.out.println(len+" "+bre);
    }
    void area()
    {
        float area;
        area=len*bre;
        System.out.println(area);
    }
    void peri()
    {
        float peri;
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
        r1.setdata((float)22.44, (float)33.66);
        r1.displaydata();
        r1.area();
        r1.peri();
        r2.getdata();
        r2.displaydata();
        r2.area();
        r2.peri();
    }
}
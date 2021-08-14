//ScannerClassInputOutput
import java.util.Scanner;
public class ScannerClassInputOutput
{
    public static void main(String[] args)
    {
        Scanner Sc=new Scanner(System.in);
        String s=Sc.nextLine();
        System.out.println(s);
        int i=Sc.nextInt();
        System.out.println(i);
        double f=Sc.nextDouble();
        System.out.println(f);
        char c=Sc.next().charAt(0);
        System.out.println(c);
        Sc.close();
    }
}
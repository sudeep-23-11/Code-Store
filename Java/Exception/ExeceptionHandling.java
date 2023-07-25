//ExeceptionHandling
import java.util.Scanner;
public class ExeceptionHandling
{
    public static void main(String[] args)
    {
        int i, n, x;
        String s;
        for(i=0;i<5;i++)
        {
            Scanner Sc=new Scanner(System.in);
            n=Sc.nextInt();
            try
            {
                try
                {
                    if(n%3==2)
                    {
                        s=null;
                        System.out.println(s.length());
                    }
                    else if(n%3==1)
                    {
                        int arr[]=new int[5];
                        arr[5]=0;
                        System.out.println(arr[5]);
                    }
                    else
                    {
                        x=5/0;
                        System.out.println(x);
                    }
                }
                catch(ArrayIndexOutOfBoundsException e)
                {
                    System.out.println(e);
                    System.out.println(e.getMessage());
                }
                catch(ArithmeticException e)
                {
                    System.out.println(e);
                    System.out.println(e.getMessage());
                }
                finally
                {
                    System.out.println("Array Index out of Bounds Exception Handled");
                    System.out.println("Arithmetic Exception Handled");
                }
            }
            catch(NullPointerException e)
            {
                System.out.println(e);
                System.out.println(e.getMessage());
            }
            finally
            {
                System.out.println("Null Pointer Exception Handled");
            }
            Sc.close();
        }
    }
}
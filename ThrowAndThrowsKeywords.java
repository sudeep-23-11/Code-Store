//ThrowAndThrowsKeywords
import java.io.IOException;
class UserDefinedException extends Exception
{
    public UserDefinedException(String s)
    {
        super(s);
    }
}
public class ThrowAndThrowsKeywords
{
    public static void AE()
    {
        throw new ArithmeticException("Arithmetic Exception Occurred");
    }
    public static void IOE() throws IOException
    {
        throw new IOException("IO Exception occurred");
    }
    public static void UDE() throws UserDefinedException
    {
        throw new UserDefinedException("User Defined Exception Occurred");
    }
    public static void main(String[] args)
    {
        try
        {
            AE();
        }
        catch(ArithmeticException e)
        {
            System.out.println(e);
            System.out.println(e.getMessage());
        }
        try
        {
            IOE();
        }
        catch(IOException e)
        {
            System.out.println(e);
            System.out.println(e.getMessage());
        }
        try
        {
            UDE();
        }
        catch(UserDefinedException e)
        {
            System.out.println(e);
            System.out.println(e.getMessage());
        }
    }
}
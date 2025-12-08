//ExeceptionHandling
class AgeException extends Exception {
    public AgeException(String msg) {
        super(msg);
    }
}

public class ExeceptionHandling {
    public static void checkAge(int age) throws AgeException {
        if (age<0)
        throw new AgeException("negative age not allowed");
        else if (age<18)
        System.out.println("under age");
        else
        System.out.println("legal adult");
    }

    public static void main(String[] args) {
        try {
            checkAge(21);
            checkAge(11);
            checkAge(-1);
        }
        catch (AgeException e) {
            System.out.println(e);
        }
        finally {
            System.out.println("checking done");
        }
    }
}
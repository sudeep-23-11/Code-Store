//ScannerClass
import java.util.Scanner;
public class ScannerInput {
    public static void main(String[] args) {
        Scanner Sc=new Scanner(System.in);
        System.out.println(Sc.nextLine());
        System.out.println(Sc.next());
        System.out.println(Sc.nextDouble());
        System.out.println(Sc.nextInt());
        System.out.println(Sc.nextBoolean());
        Sc.close();
    }
}
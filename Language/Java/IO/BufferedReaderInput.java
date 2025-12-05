//BufferedReaderClass
import java.io.InputStreamReader;
import java.io.BufferedReader;
public class BufferedReaderInput {
    public static void main(String[] args) throws Exception {
        BufferedReader Br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println(Br.readLine());
        System.out.println(Br.read());
        Br.close();
    }
}